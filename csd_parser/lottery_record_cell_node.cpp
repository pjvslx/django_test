#include "lottery_record_cell_node.h"
#include "ComponentManager.h"
#include "ResourceManager.h"
#include "ui/CocosGUI.h"
#include "OS.h"
#include "UIHelperHydra.h"
#include "Localization.h"
USING_NS_CC;
using namespace hydra;
using namespace ui;
using namespace std;
lottery_record_cell_node::lottery_record_cell_node()
  : Node_avatar(nullptr)
  : Image_back(nullptr)
  : Text_time(nullptr)
  : Text_nickname(nullptr)
  : Text_money(nullptr)
{
}


lottery_record_cell_node::~lottery_record_cell_node()
{
}

lottery_record_cell_node* lottery_record_cell_node::create()
{
    lottery_record_cell_node *view = new lottery_record_cell_node;
    if (view && view->init())
    {
        view->autorelease();
        return view;
    }
    else
    {
        delete view;
        view = nullptr;
        return nullptr;
    }
}
bool lottery_record_cell_node::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(lottery_record_cell_node, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}
/*************************工具生成begin*************************/
void lottery_record_cell_node::__setupCocosUI(Node* rootNode)
{
	Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Node_avatar");
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_time");
	Text_nickname = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_nickname");
	Text_money = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_money");
}
/*************************工具生成end*************************/
