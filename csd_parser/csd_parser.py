from xml.etree import ElementTree as ET
tree = ET.parse('TestLayer.csd')

root = tree.getroot()
tag = root.tag
print "tag" , tag

global content
global object_data

for child in root:
    if cmp(child.tag,'Content') == 0:
        global content
        content = child

for child in content:
    if cmp(child.tag,'Content') == 0:
        content = child

for child in content:
    #print child.tag , child.attrib
    if cmp(child.tag,"ObjectData") == 0:
        object_data = child

print object_data.tag, object_data.attrib

for child in object_data:
    print child.tag, child.attrib




