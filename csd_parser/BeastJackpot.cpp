#include "BeastJackpot.h"
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

BeastJackpot::BeastJackpot()
  : m_Image_back(nullptr)
  , m_title_jcxx(nullptr)
  , m_Button_close(nullptr)
  , m_Button_record(nullptr)
  , m_Image_top(nullptr)
  , m_icon_coin(nullptr)
  , m_AtlasLabel_jackpot_num(nullptr)
  , m_Image_down(nullptr)
  , m_last_winner(nullptr)
  , m_Node_avatar(nullptr)
  , m_Text_nick(nullptr)
  , m_Text_time(nullptr)
  , m_AtlasLabel_win_num(nullptr)
  , m_wan_text(nullptr)
  , m_Text_desc(nullptr)
  , m_Text_rule(nullptr)
{
}


BeastJackpot::~BeastJackpot()
{
}

BeastJackpot* BeastJackpot::create()
{
    BeastJackpot *view = new BeastJackpot;
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

bool BeastJackpot::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(BeastJackpot, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void BeastJackpot::__addUIEvent()
{
}

void BeastJackpot::onEnter()
{
    Layer::onEnter();
}

void BeastJackpot::onExit()
{
    Layer::onExit();
}

/*************************工具生成begin*************************/
void BeastJackpot::__setupCocosUI(Node* rootNode)
{
	m_Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	m_title_jcxx = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("title_jcxx"));
	m_Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close"));
	m_Button_record = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_record"));
	m_Image_top = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top"));
	m_icon_coin = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("icon_coin"));
	m_AtlasLabel_jackpot_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("AtlasLabel_jackpot_num"));
	m_Image_down = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down"));
	m_last_winner = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("last_winner"));
	m_Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Node_avatar"));
	m_Text_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_nick"));
	m_Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_time"));
	m_AtlasLabel_win_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("AtlasLabel_win_num"));
	m_wan_text = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("wan_text"));
	m_Text_desc = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_desc"));
	m_Text_rule = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rule"));
}
/*************************工具生成end*************************/
