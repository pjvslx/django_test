#include "LotteryRecordNode.h"
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

LotteryRecordNode::LotteryRecordNode()
  : Image_back(nullptr)
  , Image_title(nullptr)
  , Image_time(nullptr)
  , Image_nickname(nullptr)
  , Image_reward(nullptr)
  , ScrollView_1(nullptr)
{
}


LotteryRecordNode::~LotteryRecordNode()
{
}

LotteryRecordNode* LotteryRecordNode::create()
{
    LotteryRecordNode *view = new LotteryRecordNode;
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

bool LotteryRecordNode::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(LotteryRecordNode, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void LotteryRecordNode::__addUIEvent()
{
}

void LotteryRecordNode::onEnter()
{
    Node::onEnter();
}

void LotteryRecordNode::onExit()
{
    Node::onExit();
}

/*************************工具生成begin*************************/
void LotteryRecordNode::__setupCocosUI(Node* rootNode)
{
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_title"));
	Image_time = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_time"));
	Image_nickname = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_nickname"));
	Image_reward = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_reward"));
	ScrollView_1 = static_cast<cocos2d::ui::ScrollView*>(rootNode->getChildByName("ScrollView_1"));
}
/*************************工具生成end*************************/
