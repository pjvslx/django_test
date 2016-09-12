#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Text;
        class Button;
        class TextAtlas;
        class LoadingBar;
        class PageView;
        class ScrollView;
        class Layout;
    }
}

class ResourceManager;
class .\TestLayer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static .\TestLayer* create();

private:
    .\TestLayer();
    ~.\TestLayer();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* Image_back
	cocos2d::ui::Text* Text_winner_nick
	cocos2d::Node* Node_winner_avatar
	cocos2d::Sprite* 1
	cocos2d::Sprite* 2
	cocos2d::Sprite* 3
	cocos2d::Node* Node_rank_avatar1
	cocos2d::Node* Node_rank_avatar2
	cocos2d::Node* Node_rank_avatar3
	cocos2d::ui::Text* Text_rank_nick1
	cocos2d::ui::Text* Text_rank_nick2
	cocos2d::ui::Text* Text_rank_nick3
	cocos2d::ui::Text* Text_rank_num1
	cocos2d::ui::Text* Text_rank_num2
	cocos2d::ui::Text* Text_rank_num3
	cocos2d::Sprite* btn_win
	cocos2d::ui::Button* Button_close
	cocos2d::Node* Node_winner_num
	cocos2d::Node* Node_beast
	cocos2d::ui::ImageView* Image_back
	cocos2d::Sprite* title_jcxx
	cocos2d::ui::Button* Button_close
	cocos2d::ui::Button* Button_record
	cocos2d::ui::ImageView* Image_top
	cocos2d::Sprite* icon_coin
	cocos2d::ui::TextAtlas* AtlasLabel_jackpot_num
	cocos2d::ui::ImageView* Image_down
	cocos2d::Sprite* last_winner
	cocos2d::Node* Node_avatar
	cocos2d::ui::Text* Text_nick
	cocos2d::ui::Text* Text_time
	cocos2d::ui::TextAtlas* AtlasLabel_win_num
	cocos2d::Sprite* wan_text
	cocos2d::ui::Text* Text_desc
	cocos2d::ui::Text* Text_rule
	cocos2d::ui::ImageView* bg
	cocos2d::Sprite* light1
	cocos2d::Sprite* light2
	cocos2d::Sprite* light3
	cocos2d::Sprite* star
	cocos2d::Sprite* logo
	cocos2d::ui::ImageView* loading_bar_bg
	cocos2d::ui::LoadingBar* LoadingBar
	cocos2d::Sprite* flash
	cocos2d::ui::ImageView* Image_back
	cocos2d::ui::Button* Button_level_1
	cocos2d::ui::Text* Text_content
	cocos2d::ui::Button* Button_level_2
	cocos2d::ui::Text* Text_content
	cocos2d::ui::Button* Button_level_3
	cocos2d::ui::Text* Text_content
	cocos2d::ui::Button* Button_level_4
	cocos2d::ui::Text* Text_content
	cocos2d::ui::ImageView* Image_dlg
	cocos2d::ui::ImageView* Image_title
	cocos2d::ui::ImageView* Image_mid
	cocos2d::ui::Button* Button_follow_degree
	cocos2d::Node* Node_text
	cocos2d::ui::Button* Button_repeat
	cocos2d::ui::Button* Button_follow
	cocos2d::ui::Text* Text_follow_num
	cocos2d::ui::Text* Text_mid_desc1
	cocos2d::ui::Text* Text_mid_desc2
	cocos2d::ui::ImageView* Image_bet_back5
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::ImageView* Image_bet_back4
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::ImageView* Image_bet_back3
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::ImageView* Image_bet_back2
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::ImageView* Image_bet_back1
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::ImageView* Image_bet_back0
	cocos2d::ui::Button* Button_bet
	cocos2d::ui::ImageView* Image_content
	cocos2d::ui::Text* Text_rate
	cocos2d::ui::Text* Text_self
	cocos2d::ui::Text* Text_total
	cocos2d::ui::Button* Button_close
	cocos2d::ui::Button* Button_record
	cocos2d::ui::Button* Button_rule
	cocos2d::ui::ImageView* Image_history
	cocos2d::ui::ImageView* Image_jackpot
	cocos2d::ui::Text* Text_jackpot_lastdesc
	cocos2d::Node* Node_jeckpot_count
	cocos2d::Node* Node_jackpot_num
	cocos2d::ui::ImageView* Image_maxwin
	cocos2d::ui::Text* Text_winmax_name
	cocos2d::Node* Node_maxwin_avatar
	cocos2d::ui::Text* Text_maxwin_node
	cocos2d::ui::ImageView* Image_countdown_desc
	cocos2d::Node* Node_countdown
	cocos2d::ui::PageView* PageView_his
	cocos2d::Node* Node_poker_1
	cocos2d::Node* Node_poker_2
	cocos2d::Node* Node_poker_3
	cocos2d::Node* Node_record
	cocos2d::ui::Button* Button_left_arrow
	cocos2d::ui::Button* Button_right_arrow
	cocos2d::ui::ImageView* Image_jsz
	cocos2d::Node* Node_avatar
	cocos2d::ui::ImageView* Image_back
	cocos2d::ui::Text* Text_time
	cocos2d::ui::Text* Text_nickname
	cocos2d::ui::Text* Text_money
	cocos2d::ui::ImageView* Image_back
	cocos2d::ui::ImageView* Image_title
	cocos2d::ui::ImageView* Image_time
	cocos2d::ui::ImageView* Image_nickname
	cocos2d::ui::ImageView* Image_reward
	cocos2d::ui::ScrollView* ScrollView_1
	cocos2d::ui::Button* Button_1
	cocos2d::ui::Layout* Panel_1
/*************************工具生成结束*************************/
};