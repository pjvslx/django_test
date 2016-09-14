#include "LotteryLayer.h"
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

LotteryLayer::LotteryLayer()
  : m_Image_dlg(nullptr)
  , m_Image_title(nullptr)
  , m_Image_mid(nullptr)
  , m_Button_follow_degree(nullptr)
  , m_Node_text(nullptr)
  , m_Button_repeat(nullptr)
  , m_Button_follow(nullptr)
  , m_Text_follow_num(nullptr)
  , m_Text_mid_desc1(nullptr)
  , m_Text_mid_desc2(nullptr)
  , m_Image_bet_back5(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Image_bet_back4(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Image_bet_back3(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Image_bet_back2(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Image_bet_back1(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Image_bet_back0(nullptr)
  , m_Button_bet(nullptr)
  , m_Image_content(nullptr)
  , m_Text_rate(nullptr)
  , m_Text_self(nullptr)
  , m_Text_total(nullptr)
  , m_Button_close(nullptr)
  , m_Button_record(nullptr)
  , m_Button_rule(nullptr)
  , m_Image_history(nullptr)
  , m_Image_jackpot(nullptr)
  , m_Text_jackpot_lastdesc(nullptr)
  , m_Node_jeckpot_count(nullptr)
  , m_Node_jackpot_num(nullptr)
  , m_Image_maxwin(nullptr)
  , m_Text_winmax_name(nullptr)
  , m_Node_maxwin_avatar(nullptr)
  , m_Text_maxwin_node(nullptr)
  , m_Image_countdown_desc(nullptr)
  , m_Node_countdown(nullptr)
  , m_PageView_his(nullptr)
  , m_Node_poker_1(nullptr)
  , m_Node_poker_2(nullptr)
  , m_Node_poker_3(nullptr)
  , m_Node_record(nullptr)
  , m_Button_left_arrow(nullptr)
  , m_Button_right_arrow(nullptr)
  , m_Image_jsz(nullptr)
{
}


LotteryLayer::~LotteryLayer()
{
}

LotteryLayer* LotteryLayer::create()
{
    LotteryLayer *view = new LotteryLayer;
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

bool LotteryLayer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(LotteryLayer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void LotteryLayer::__addUIEvent()
{
}

void LotteryLayer::onEnter()
{
    Layer::onEnter();
}

void LotteryLayer::onExit()
{
    Layer::onExit();
}

/*************************工具生成begin*************************/
void LotteryLayer::__setupCocosUI(Node* rootNode)
{
	m_Image_dlg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg"));
	m_Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_title"));
	m_Image_mid = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid"));
	m_Button_follow_degree = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow_degree"));
	m_Node_text = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow_degree")->getChildByName("Node_text"));
	m_Button_repeat = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_repeat"));
	m_Button_follow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow"));
	m_Text_follow_num = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow")->getChildByName("Text_follow_num"));
	m_Text_mid_desc1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Text_mid_desc1"));
	m_Text_mid_desc2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Text_mid_desc2"));
	m_Image_bet_back5 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Text_total"));
	m_Image_bet_back4 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Text_total"));
	m_Image_bet_back3 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Text_total"));
	m_Image_bet_back2 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Text_total"));
	m_Image_bet_back1 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Text_total"));
	m_Image_bet_back0 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0"));
	m_Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet"));
	m_Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet")->getChildByName("Image_content"));
	m_Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet")->getChildByName("Text_rate"));
	m_Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Text_self"));
	m_Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Text_total"));
	m_Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_close"));
	m_Button_record = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_record"));
	m_Button_rule = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_rule"));
	m_Image_history = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_history"));
	m_Image_jackpot = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot"));
	m_Text_jackpot_lastdesc = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Text_jackpot_lastdesc"));
	m_Node_jeckpot_count = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Node_jeckpot_count"));
	m_Node_jackpot_num = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Node_jackpot_num"));
	m_Image_maxwin = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin"));
	m_Text_winmax_name = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Text_winmax_name"));
	m_Node_maxwin_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Node_maxwin_avatar"));
	m_Text_maxwin_node = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Text_maxwin_node"));
	m_Image_countdown_desc = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_countdown_desc"));
	m_Node_countdown = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_countdown"));
	m_PageView_his = static_cast<cocos2d::ui::PageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("PageView_his"));
	m_Node_poker_1 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_1"));
	m_Node_poker_2 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_2"));
	m_Node_poker_3 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_3"));
	m_Node_record = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_record"));
	m_Button_left_arrow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_left_arrow"));
	m_Button_right_arrow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_right_arrow"));
	m_Image_jsz = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jsz"));
}
/*************************工具生成end*************************/
