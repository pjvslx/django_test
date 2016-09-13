#include "lottery_record_node.h"
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
lottery_record_node::lottery_record_node()
  : Image_back(nullptr)
  , Image_title(nullptr)
  , Image_time(nullptr)
  , Image_nickname(nullptr)
  , Image_reward(nullptr)
  , ScrollView_1(nullptr)
{
}


lottery_record_node::~lottery_record_node()
{
}

lottery_record_node* lottery_record_node::create()
{
    lottery_record_node *view = new lottery_record_node;
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

bool lottery_record_node::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(lottery_record_node, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}

/*************************工具生成begin*************************/
void lottery_record_node::__setupCocosUI(Node* rootNode)
{
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_title"));
	Image_time = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_time"));
	Image_nickname = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_nickname"));
	Image_reward = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_reward"));
	ScrollView_1 = static_cast<cocos2d::ui::ScrollView*>(rootNode->getChildByName("ScrollView_1"));
}
/*************************工具生成end*************************/
