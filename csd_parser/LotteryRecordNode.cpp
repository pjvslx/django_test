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
  : m_Image_back(nullptr)
  , m_Image_title(nullptr)
  , m_Image_time(nullptr)
  , m_Image_nickname(nullptr)
  , m_Image_reward(nullptr)
  , m_ScrollView_1(nullptr)
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
	m_Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	m_Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_title"));
	m_Image_time = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_time"));
	m_Image_nickname = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_nickname"));
	m_Image_reward = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_reward"));
	m_ScrollView_1 = static_cast<cocos2d::ui::ScrollView*>(rootNode->getChildByName("ScrollView_1"));
}
/*************************工具生成end*************************/
