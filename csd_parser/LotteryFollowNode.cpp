#include "LotteryFollowNode.h"
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

LotteryFollowNode::LotteryFollowNode()
  : m_Image_back(nullptr)
  , m_Button_level_1(nullptr)
  , m_Text_content(nullptr)
  , m_Button_level_2(nullptr)
  , m_Text_content(nullptr)
  , m_Button_level_3(nullptr)
  , m_Text_content(nullptr)
  , m_Button_level_4(nullptr)
  , m_Text_content(nullptr)
{
}


LotteryFollowNode::~LotteryFollowNode()
{
}

LotteryFollowNode* LotteryFollowNode::create()
{
    LotteryFollowNode *view = new LotteryFollowNode;
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

bool LotteryFollowNode::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(LotteryFollowNode, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void LotteryFollowNode::__addUIEvent()
{
}

void LotteryFollowNode::onEnter()
{
    Node::onEnter();
}

void LotteryFollowNode::onExit()
{
    Node::onExit();
}

/*************************工具生成begin*************************/
void LotteryFollowNode::__setupCocosUI(Node* rootNode)
{
	m_Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	m_Button_level_1 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_1"));
	m_Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_1")->getChildByName("Text_content"));
	m_Button_level_2 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_2"));
	m_Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_2")->getChildByName("Text_content"));
	m_Button_level_3 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_3"));
	m_Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_3")->getChildByName("Text_content"));
	m_Button_level_4 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_4"));
	m_Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_4")->getChildByName("Text_content"));
}
/*************************工具生成end*************************/
