#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class cocos2d::ui::ImageView*
        class cocos2d::ui::Button*
        class cocos2d::Node*
        class cocos2d::ui::Text*
        class cocos2d::ui::PageView*
    }
}

class ResourceManager;
class lottery_layer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static lottery_layer* create();

private:
    lottery_layer();
    ~lottery_layer();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
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
/*************************工具生成结束*************************/
};