#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Button;
        class TextAtlas;
        class Text;
    }
}

class ResourceManager;
class BeastJackpot
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static BeastJackpot* create();

private:
    BeastJackpot();
    ~BeastJackpot();

/*************************工具生成函数开始*************************/
    bool init();
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* m_Image_back;
	cocos2d::Sprite* m_title_jcxx;
	cocos2d::ui::Button* m_Button_close;
	cocos2d::ui::Button* m_Button_record;
	cocos2d::ui::ImageView* m_Image_top;
	cocos2d::Sprite* m_icon_coin;
	cocos2d::ui::TextAtlas* m_AtlasLabel_jackpot_num;
	cocos2d::ui::ImageView* m_Image_down;
	cocos2d::Sprite* m_last_winner;
	cocos2d::Node* m_Node_avatar;
	cocos2d::ui::Text* m_Text_nick;
	cocos2d::ui::Text* m_Text_time;
	cocos2d::ui::TextAtlas* m_AtlasLabel_win_num;
	cocos2d::Sprite* m_wan_text;
	cocos2d::ui::Text* m_Text_desc;
	cocos2d::ui::Text* m_Text_rule;
/*************************工具生成结束*************************/
};