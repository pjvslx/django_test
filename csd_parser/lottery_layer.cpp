#include lottery_layer.h"
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
lottery_layer::lottery_layer()
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
{
}


lottery_layer::~lottery_layer()
{
}

lottery_layer* lottery_layer::create()
{
    lottery_layer *view = new lottery_layer;
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
bool lottery_layer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(lottery_layer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}
/*************************工具生成begin*************************/
void lottery_layer::__setupCocosUI(Node* rootNode)
{
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
}
/*************************工具生成end*************************/
