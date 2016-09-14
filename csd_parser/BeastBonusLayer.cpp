#include "BeastBonusLayer.h"
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

BeastBonusLayer::BeastBonusLayer()
  : m_Image_back(nullptr)
  , m_Text_winner_nick(nullptr)
  , m_Node_winner_avatar(nullptr)
  , m_1(nullptr)
  , m_2(nullptr)
  , m_3(nullptr)
  , m_Node_rank_avatar1(nullptr)
  , m_Node_rank_avatar2(nullptr)
  , m_Node_rank_avatar3(nullptr)
  , m_Text_rank_nick1(nullptr)
  , m_Text_rank_nick2(nullptr)
  , m_Text_rank_nick3(nullptr)
  , m_Text_rank_num1(nullptr)
  , m_Text_rank_num2(nullptr)
  , m_Text_rank_num3(nullptr)
  , m_btn_win(nullptr)
  , m_Button_close(nullptr)
  , m_Node_winner_num(nullptr)
  , m_Node_beast(nullptr)
{
}


BeastBonusLayer::~BeastBonusLayer()
{
}

BeastBonusLayer* BeastBonusLayer::create()
{
    BeastBonusLayer *view = new BeastBonusLayer;
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

bool BeastBonusLayer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(BeastBonusLayer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void BeastBonusLayer::__addUIEvent()
{
}

void BeastBonusLayer::onEnter()
{
    Layer::onEnter();
}

void BeastBonusLayer::onExit()
{
    Layer::onExit();
}

/*************************工具生成begin*************************/
void BeastBonusLayer::__setupCocosUI(Node* rootNode)
{
	m_Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	m_Text_winner_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_winner_nick"));
	m_Node_winner_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_avatar"));
	m_1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("1"));
	m_2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("2"));
	m_3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("3"));
	m_Node_rank_avatar1 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar1"));
	m_Node_rank_avatar2 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar2"));
	m_Node_rank_avatar3 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar3"));
	m_Text_rank_nick1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick1"));
	m_Text_rank_nick2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick2"));
	m_Text_rank_nick3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick3"));
	m_Text_rank_num1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num1"));
	m_Text_rank_num2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num2"));
	m_Text_rank_num3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num3"));
	m_btn_win = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("btn_win"));
	m_Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close"));
	m_Node_winner_num = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_num"));
	m_Node_beast = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_beast"));
}
/*************************工具生成end*************************/
