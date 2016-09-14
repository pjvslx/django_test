#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Button;
        class Text;
        class PageView;
    }
}

class ResourceManager;
class LotteryLayer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static LotteryLayer* create();

private:
    LotteryLayer();
    ~LotteryLayer();

/*************************工具生成函数开始*************************/
    bool init();
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* m_Image_dlg;
	cocos2d::ui::ImageView* m_Image_title;
	cocos2d::ui::ImageView* m_Image_mid;
	cocos2d::ui::Button* m_Button_follow_degree;
	cocos2d::Node* m_Node_text;
	cocos2d::ui::Button* m_Button_repeat;
	cocos2d::ui::Button* m_Button_follow;
	cocos2d::ui::Text* m_Text_follow_num;
	cocos2d::ui::Text* m_Text_mid_desc1;
	cocos2d::ui::Text* m_Text_mid_desc2;
	cocos2d::ui::ImageView* m_Image_bet_back5;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::ImageView* m_Image_bet_back4;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::ImageView* m_Image_bet_back3;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::ImageView* m_Image_bet_back2;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::ImageView* m_Image_bet_back1;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::ImageView* m_Image_bet_back0;
	cocos2d::ui::Button* m_Button_bet;
	cocos2d::ui::ImageView* m_Image_content;
	cocos2d::ui::Text* m_Text_rate;
	cocos2d::ui::Text* m_Text_self;
	cocos2d::ui::Text* m_Text_total;
	cocos2d::ui::Button* m_Button_close;
	cocos2d::ui::Button* m_Button_record;
	cocos2d::ui::Button* m_Button_rule;
	cocos2d::ui::ImageView* m_Image_history;
	cocos2d::ui::ImageView* m_Image_jackpot;
	cocos2d::ui::Text* m_Text_jackpot_lastdesc;
	cocos2d::Node* m_Node_jeckpot_count;
	cocos2d::Node* m_Node_jackpot_num;
	cocos2d::ui::ImageView* m_Image_maxwin;
	cocos2d::ui::Text* m_Text_winmax_name;
	cocos2d::Node* m_Node_maxwin_avatar;
	cocos2d::ui::Text* m_Text_maxwin_node;
	cocos2d::ui::ImageView* m_Image_countdown_desc;
	cocos2d::Node* m_Node_countdown;
	cocos2d::ui::PageView* m_PageView_his;
	cocos2d::Node* m_Node_poker_1;
	cocos2d::Node* m_Node_poker_2;
	cocos2d::Node* m_Node_poker_3;
	cocos2d::Node* m_Node_record;
	cocos2d::ui::Button* m_Button_left_arrow;
	cocos2d::ui::Button* m_Button_right_arrow;
	cocos2d::ui::ImageView* m_Image_jsz;
/*************************工具生成结束*************************/
};