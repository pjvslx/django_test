#-*- coding: UTF-8 -*-
from xml.etree import ElementTree as ET
import os

global content
global object_data

element_arr = []

class ui_element:
    def __init__(self,name,path,type):
        self._name = name
        self._path = path
        self._type = type
    def show_info(self):
        print "name = " , self._name , " path = " , self._path , " _type = " , self._type
    def get_name(self):
        return self._name
    def get_path(self):
        return self._path
    def get_type(self):
        return self._type

def get_code_type(type):
    type_map = {"SingleNodeObjectData":"cocos2d::Node*",
                "TextObjectData":"cocos2d::ui::Text*",
                "ButtonObjectData":"cocos2d::ui::Button*",
                "CheckBoxObjectData":"cocos2d::ui::CheckBox*",
                "PanelObjectData":"cocos2d::ui::Layout*",
                "TextFieldObjectData":"cocos2d::ui::TextField*",
                "SpriteObjectData":"cocos2d::Sprite*",
                "PageViewObjectData":"cocos2d::ui::PageView*",
                "ImageViewObjectData":"cocos2d::ui::ImageView*",
                "ScrollViewObjectData":"cocos2d::ui::ScrollView*",
                "TextAtlasObjectData":"cocos2d::ui::TextAtlas*",
                "LoadingBarObjectData":"cocos2d::ui::LoadingBar*",
                "SliderObjectData":"cocos2d::ui::Slider*"}

    if type_map.has_key(type):
        return type_map[type]
    else:
        return ""

def is_ui_namespace(code_type):
    pos = code_type.find("ui")
    if pos < 0:
        return False
    return True

def is_ui_ignore(element):
    ui_name = element.get_name()
    pos = ui_name.find("_ignore")
    if pos >= 0:
        return True
    return False

def parse_node(node,parent_name):
    global element_arr
    for child in node:
        if cmp(child.tag, "NodeObjectData") == 0:
            name = child.attrib['Name']
            type = child.attrib['ctype']
            path = ''
            #it is ui component
            if  child.attrib.has_key('Name') :
                #print "ui.name = " + child.attrib['Name'] + " ui.type = " + child.attrib['ctype'] + " parent_name = " + parent_name + '|' + child.attrib['Name']
                path =  parent_name + '|' + child.attrib['Name']
            else:
                #print "ui.name = " + child.attrib['Name'] + " ui.type = " + child.attrib['ctype'] + " parent_name = " + parent_name
                path = parent_name

            e = ui_element(child.attrib['Name'],path,child.attrib['ctype'])
            element_arr.append(e)

            for third in child:
                if cmp(third.tag,"Children") == 0:
                    parse_node(third,parent_name + "|" + child.attrib['Name'])
        elif cmp(child.tag,"Children") == 0:
            parse_node(child,node.attrib['Name'])


def parse_file(filename):
    global element_arr
    element_arr = []
    if not filename.endswith(".csd") or not os.path.exists(filename):
        print "there is no file " + filename + " or the filename is not end with csd"
        return
    #'beast_jackpot.csd'
    tree = ET.parse(filename)
    root = tree.getroot()
    tag = root.tag
    node_or_layer = 1   # 1: node 2: layer
    for child in root:
        if cmp(child.tag,'Content') == 0:
            global content
            content = child
        if cmp(child.tag,'PropertyGroup') == 0:
            node_or_layer = child.attrib['Type']
            print "node_or_layer = " , node_or_layer
    for child in content:
        if cmp(child.tag,'Content') == 0:
            content = child

    for child in content:
        #print child.tag , child.attrib
        if cmp(child.tag,"ObjectData") == 0:
            object_data = child

    print object_data.tag, object_data.attrib['ctype']

    print "1111111111111111111111"

    for child in object_data:

        if cmp(child.tag,"Children") == 0:
            content = child
            print content.tag, content.attrib

    parse_node(content,"");

    for element in element_arr:
        element.show_info()

    output_h_file(filename, element_arr, node_or_layer)
    output_cpp_file(filename, element_arr, node_or_layer)

    element_arr = []

def output_h_file(csbfilename,arr,root_type):
    print "output_h_file filename = " + csbfilename
    filename = csbfilename[0:len(csbfilename) - 4]

    name_list = filename.split("_")

    class_name = ""

    for l in name_list:
        class_name = class_name + l.title()

    h_filename = class_name + ".h"
    print "filename = " , h_filename

    fp = open(h_filename,"w+")
    fp.write("#pragma once\n")
    fp.write("#include \"cocos2d.h\"\n")
    fp.write("#include \"ControlHandler.h\"\n")
    fp.write("\n\n")
    fp.write("namespace cocos2d {\n")
    fp.write("    namespace ui {\n")

    my_type = get_code_type("TextObjectData")
    print "my_type = " ,my_type
    type_arr = []

    for element in arr:
        type = element.get_type()
        code_type = get_code_type(type)
        print "type = " + type + " code_type = " + code_type
        exist = 0
        for t in type_arr:
            if cmp(t,code_type) == 0:
                exist = 1
                break
        print "code_type = " + code_type , "exist",exist

        is_ui = is_ui_namespace(code_type)

        if not cmp(code_type,"") == 0 and exist == 0 and is_ui == True and is_ui_ignore(element) == False:
            class_pos = code_type.rfind("::")
            new_code_type = code_type[class_pos + 2: len(code_type) - 1]
            fp.write("        class " + new_code_type + ";\n")
            type_arr.append(code_type)

    fp.write("    }\n")
    fp.write("}\n")
    fp.write("\n")
    fp.write("class ResourceManager;\n")

    fp.write("class " + class_name + "\n")
    #is this csb a node or a layer
    if cmp(root_type, "Layer") == 0:
        fp.write("    : public cocos2d::Layer\n")
    elif cmp(root_type,"Node") == 0:
        fp.write("    : public cocos2d::Node\n")

    fp.write("    , public hydra::ControlHandler\n")
    fp.write("{\n")
    fp.write("public:\n")
    fp.write("    static " + class_name + "* create();\n")
    fp.write("\n")

    fp.write("private:\n")
    fp.write("    " + class_name + "();\n")
    fp.write("    ~" + class_name + "();\n")
    fp.write("\n")
    fp.write("    bool init();\n")
    fp.write("/*************************工具生成函数开始*************************/\n")
    fp.write("    void __setupCocosUI(cocos2d::Node* rootNode);\n")
    fp.write("    void __addUIEvent();\n")
    fp.write("    virtual void onEnter();\n")
    fp.write("    virtual void onExit();\n")
    fp.write("/*************************工具生成函数结束*************************/\n")
    fp.write("private:\n")
    ##########################write gui member here##########################

    fp.write("/*************************工具生成开始*************************/\n")

    for element in arr:
        if is_ui_ignore(element) == False:
            type = element.get_type()
            name = element.get_name()
            code_type = get_code_type(type)
            fp.write("	" + code_type + " " + name + ";\n")

    fp.write("/*************************工具生成结束*************************/\n")

    ##########################write gui member end###########################
    fp.write("};")



    fp.flush()
    fp.close()
    pass

def output_cpp_file(csbfilename,arr,root_type):
    print "output_cpp_file filename = " + csbfilename
    filename = csbfilename[0:len(csbfilename) - 4]
    name_list = filename.split("_")
    class_name = ""
    for l in name_list:
        class_name = class_name + l.title()
    cpp_filename = class_name + ".cpp"
    h_filename = class_name + ".h"
    fp = open(cpp_filename,"w+")
    fp.write("#include " + "\"" + h_filename + "\"\n")
    fp.write("#include \"ComponentManager.h\"\n")
    fp.write("#include \"ResourceManager.h\"\n")
    fp.write("#include \"ui/CocosGUI.h\"\n")
    fp.write("#include \"OS.h\"\n")
    fp.write("#include \"UIHelperHydra.h\"\n")
    fp.write("#include \"Localization.h\"\n")

    fp.write("\n")

    fp.write("USING_NS_CC;\n")
    fp.write("using namespace hydra;\n")
    fp.write("using namespace ui;\n")
    fp.write("using namespace std;\n")

    fp.write("\n")

    ##################construct#################
    fp.write(class_name + "::" + class_name + "()\n")
    index = 1
    for element in arr:
        if is_ui_ignore(element) == False:
            name = element.get_name()
            if index == 1:
                fp.write("  : " + name + "(nullptr)\n")
            else:
                fp.write("  , " + name + "(nullptr)\n")

            index = index + 1

    fp.write("{\n")
    fp.write("}\n")

    fp.write("\n\n")

    ##################descontruct#################
    fp.write(class_name + "::" + "~" + class_name + "()\n")
    fp.write("{\n")
    fp.write("}\n")
    fp.write("\n")

    ##################create func#################
    fp.write(class_name + "*" + " " + class_name + "::create()\n")
    fp.write("{\n")
    fp.write("    " + class_name + " *view = new " + class_name + ";\n")
    fp.write("    if (view && view->init())\n")
    fp.write("    {\n")
    fp.write("        view->autorelease();\n")
    fp.write("        return view;\n")
    fp.write("    }\n")
    fp.write("    else\n")
    fp.write("    {\n")
    fp.write("        delete view;\n")
    fp.write("        view = nullptr;\n")
    fp.write("        return nullptr;\n")
    fp.write("    }\n")
    fp.write("}\n")

    fp.write("\n")

    ##################init func#################
    fp.write("bool " + class_name + "::init()\n")
    fp.write("{\n")
    #todo  is this csb a node or a layer
    if cmp(root_type, "Layer") == 0:
        fp.write("    if(!Layer::init())\n")
    elif cmp(root_type, "Node") == 0:
        fp.write("    if(!Node::init())\n")

    fp.write("    {\n")
    fp.write("        return false;\n")
    fp.write("    }\n")
    fp.write("	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent(\"resource_manager\"));\n")
    fp.write("	/******************需要手动修改createNodeWithType的文件名******************/\n")
    fp.write("	auto entryNode = rm->createNodeWithType(" + class_name + ", ResourceType::kResourceTypeCSB);\n")
    fp.write("	addChild(entryNode);\n")
    fp.write("	__setupCocosUI(entryNode);\n")
    fp.write("	__addUIEvent();\n")
    fp.write("	return true;\n")
    fp.write("}\n")

    fp.write("\n")

    fp.write("void " + class_name + "::__addUIEvent()\n")
    fp.write("{\n")
    fp.write("}\n")

    fp.write("\n")

    ##################onEnter func#################
    fp.write("void " + class_name + "::onEnter()\n")
    fp.write("{\n")
    if cmp(root_type, "Layer") == 0:
        fp.write("    Layer::onEnter();\n")
    elif cmp(root_type, "Node") == 0:
        fp.write("    Node::onEnter();\n")
    fp.write("}\n")

    fp.write("\n")

    ##################onExit func#################
    fp.write("void " + class_name + "::onExit()\n")
    fp.write("{\n")
    if cmp(root_type, "Layer") == 0:
        fp.write("    Layer::onExit();\n")
    elif cmp(root_type, "Node") == 0:
        fp.write("    Node::onExit();\n")
    fp.write("}\n")

    fp.write("\n")

    ##################__setupCocosUI func#################
    fp.write("/*************************工具生成begin*************************/\n")
    fp.write("void " + class_name + "::__setupCocosUI(Node* rootNode)\n")
    fp.write("{\n")
    for element in arr:
        if is_ui_ignore(element) == False:
            name = element.get_name()
            type = element.get_type()
            code_type = get_code_type(type)
            path = element.get_path()
            fp.write("	" + name + " = static_cast<" + code_type + ">(rootNode")

            while 1:
                pos1 = path.find('|')
                if pos1 < 0:
                    break
                else:
                    path = path[pos1+1:len(path)]
                    pos2 = path.find('|')
                    if pos2 < 0:
                        subname = path[0:len(path)]
                        fp.write("->getChildByName(\"" + subname + "\"));\n")
                    else:
                        subname = path[0:pos2]
                        fp.write("->getChildByName(\"" + subname + "\")")


    fp.write("}\n")
    fp.write("/*************************工具生成end*************************/\n")
    fp.flush()
    fp.close()
    pass

# parse_file('lottery_record_cell_node.csd')

def work(path):
    l = os.listdir(path)
    for f in l:
        if os.path.isdir(os.path.join(path,f)):
            work(os.path.join(path,f))
        else:
            full_path = os.path.join(path,f)
            pos = full_path.find(".\\")
            if pos >= 0:
                full_path = full_path[pos+2:len(full_path)]

            parse_file(full_path)

work(os.path.curdir)

