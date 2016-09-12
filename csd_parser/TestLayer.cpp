#include ".\TestLayer.h"
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
.\TestLayer::.\TestLayer()
  : Image_back(nullptr)
  : Text_winner_nick(nullptr)
  : Node_winner_avatar(nullptr)
  : 1(nullptr)
  : 2(nullptr)
  : 3(nullptr)
  : Node_rank_avatar1(nullptr)
  : Node_rank_avatar2(nullptr)
  : Node_rank_avatar3(nullptr)
  : Text_rank_nick1(nullptr)
  : Text_rank_nick2(nullptr)
  : Text_rank_nick3(nullptr)
  : Text_rank_num1(nullptr)
  : Text_rank_num2(nullptr)
  : Text_rank_num3(nullptr)
  : btn_win(nullptr)
  : Button_close(nullptr)
  : Node_winner_num(nullptr)
  : Node_beast(nullptr)
  : Image_back(nullptr)
  : title_jcxx(nullptr)
  : Button_close(nullptr)
  : Button_record(nullptr)
  : Image_top(nullptr)
  : icon_coin(nullptr)
  : AtlasLabel_jackpot_num(nullptr)
  : Image_down(nullptr)
  : last_winner(nullptr)
  : Node_avatar(nullptr)
  : Text_nick(nullptr)
  : Text_time(nullptr)
  : AtlasLabel_win_num(nullptr)
  : wan_text(nullptr)
  : Text_desc(nullptr)
  : Text_rule(nullptr)
  : bg(nullptr)
  : light1(nullptr)
  : light2(nullptr)
  : light3(nullptr)
  : star(nullptr)
  : logo(nullptr)
  : loading_bar_bg(nullptr)
  : LoadingBar(nullptr)
  : flash(nullptr)
  : Image_back(nullptr)
  : Button_level_1(nullptr)
  : Text_content(nullptr)
  : Button_level_2(nullptr)
  : Text_content(nullptr)
  : Button_level_3(nullptr)
  : Text_content(nullptr)
  : Button_level_4(nullptr)
  : Text_content(nullptr)
  : Image_dlg(nullptr)
  : Image_title(nullptr)
  : Image_mid(nullptr)
  : Button_follow_degree(nullptr)
  : Node_text(nullptr)
  : Button_repeat(nullptr)
  : Button_follow(nullptr)
  : Text_follow_num(nullptr)
  : Text_mid_desc1(nullptr)
  : Text_mid_desc2(nullptr)
  : Image_bet_back5(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Image_bet_back4(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Image_bet_back3(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Image_bet_back2(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Image_bet_back1(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Image_bet_back0(nullptr)
  : Button_bet(nullptr)
  : Image_content(nullptr)
  : Text_rate(nullptr)
  : Text_self(nullptr)
  : Text_total(nullptr)
  : Button_close(nullptr)
  : Button_record(nullptr)
  : Button_rule(nullptr)
  : Image_history(nullptr)
  : Image_jackpot(nullptr)
  : Text_jackpot_lastdesc(nullptr)
  : Node_jeckpot_count(nullptr)
  : Node_jackpot_num(nullptr)
  : Image_maxwin(nullptr)
  : Text_winmax_name(nullptr)
  : Node_maxwin_avatar(nullptr)
  : Text_maxwin_node(nullptr)
  : Image_countdown_desc(nullptr)
  : Node_countdown(nullptr)
  : PageView_his(nullptr)
  : Node_poker_1(nullptr)
  : Node_poker_2(nullptr)
  : Node_poker_3(nullptr)
  : Node_record(nullptr)
  : Button_left_arrow(nullptr)
  : Button_right_arrow(nullptr)
  : Image_jsz(nullptr)
  : Node_avatar(nullptr)
  : Image_back(nullptr)
  : Text_time(nullptr)
  : Text_nickname(nullptr)
  : Text_money(nullptr)
  : Image_back(nullptr)
  : Image_title(nullptr)
  : Image_time(nullptr)
  : Image_nickname(nullptr)
  : Image_reward(nullptr)
  : ScrollView_1(nullptr)
  : Button_1(nullptr)
  : Panel_1(nullptr)
{
}


.\TestLayer::~.\TestLayer()
{
}

.\TestLayer* .\TestLayer::create()
{
    .\TestLayer *view = new .\TestLayer;
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
bool .\TestLayer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(.\TestLayer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}
/*************************工具生成begin*************************/
void .\TestLayer::__setupCocosUI(Node* rootNode)
{
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	Text_winner_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_winner_nick");
	Node_winner_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_avatar");
	1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("1");
	2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("2");
	3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("3");
	Node_rank_avatar1 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar1");
	Node_rank_avatar2 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar2");
	Node_rank_avatar3 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar3");
	Text_rank_nick1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick1");
	Text_rank_nick2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick2");
	Text_rank_nick3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick3");
	Text_rank_num1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num1");
	Text_rank_num2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num2");
	Text_rank_num3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num3");
	btn_win = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("btn_win");
	Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close");
	Node_winner_num = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_num");
	Node_beast = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_beast");
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	title_jcxx = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("title_jcxx");
	Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close");
	Button_record = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_record");
	Image_top = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top");
	icon_coin = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("icon_coin");
	AtlasLabel_jackpot_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("AtlasLabel_jackpot_num");
	Image_down = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down");
	last_winner = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("last_winner");
	Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Node_avatar");
	Text_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_nick");
	Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_time");
	AtlasLabel_win_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("AtlasLabel_win_num");
	wan_text = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("wan_text");
	Text_desc = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_desc");
	Text_rule = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rule");
	bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("bg");
	light1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light1");
	light2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light2");
	light3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light3");
	star = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("star");
	logo = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("logo");
	loading_bar_bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("loading_bar_bg");
	LoadingBar = static_cast<cocos2d::ui::LoadingBar*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("LoadingBar");
	flash = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("flash");
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	Button_level_1 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_1");
	Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_1")->getChildByName("Text_content");
	Button_level_2 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_2");
	Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_2")->getChildByName("Text_content");
	Button_level_3 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_3");
	Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_3")->getChildByName("Text_content");
	Button_level_4 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_level_4");
	Text_content = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Button_level_4")->getChildByName("Text_content");
	Image_dlg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg");
	Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_title");
	Image_mid = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid");
	Button_follow_degree = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow_degree");
	Node_text = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow_degree")->getChildByName("Node_text");
	Button_repeat = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_repeat");
	Button_follow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow");
	Text_follow_num = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Button_follow")->getChildByName("Text_follow_num");
	Text_mid_desc1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Text_mid_desc1");
	Text_mid_desc2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Text_mid_desc2");
	Image_bet_back5 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back5")->getChildByName("Text_total");
	Image_bet_back4 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back4")->getChildByName("Text_total");
	Image_bet_back3 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back3")->getChildByName("Text_total");
	Image_bet_back2 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back2")->getChildByName("Text_total");
	Image_bet_back1 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back1")->getChildByName("Text_total");
	Image_bet_back0 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0");
	Button_bet = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet");
	Image_content = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet")->getChildByName("Image_content");
	Text_rate = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Button_bet")->getChildByName("Text_rate");
	Text_self = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Text_self");
	Text_total = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_mid")->getChildByName("Image_bet_back0")->getChildByName("Text_total");
	Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_close");
	Button_record = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_record");
	Button_rule = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_rule");
	Image_history = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_history");
	Image_jackpot = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot");
	Text_jackpot_lastdesc = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Text_jackpot_lastdesc");
	Node_jeckpot_count = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Node_jeckpot_count");
	Node_jackpot_num = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jackpot")->getChildByName("Node_jackpot_num");
	Image_maxwin = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin");
	Text_winmax_name = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Text_winmax_name");
	Node_maxwin_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Node_maxwin_avatar");
	Text_maxwin_node = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_maxwin")->getChildByName("Text_maxwin_node");
	Image_countdown_desc = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_countdown_desc");
	Node_countdown = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_countdown");
	PageView_his = static_cast<cocos2d::ui::PageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("PageView_his");
	Node_poker_1 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_1");
	Node_poker_2 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_2");
	Node_poker_3 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_poker_3");
	Node_record = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_dlg")->getChildByName("Node_record");
	Button_left_arrow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_left_arrow");
	Button_right_arrow = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_dlg")->getChildByName("Button_right_arrow");
	Image_jsz = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_dlg")->getChildByName("Image_jsz");
	Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Node_avatar");
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_time");
	Text_nickname = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_nickname");
	Text_money = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_money");
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back");
	Image_title = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_title");
	Image_time = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_time");
	Image_nickname = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_nickname");
	Image_reward = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_reward");
	ScrollView_1 = static_cast<cocos2d::ui::ScrollView*>(rootNode->getChildByName("ScrollView_1");
	Button_1 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_1");
	Panel_1 = static_cast<cocos2d::ui::Layout*>(rootNode->getChildByName("Panel_1");
}
/*************************工具生成end*************************/
