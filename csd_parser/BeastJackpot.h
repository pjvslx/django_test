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

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* Image_back;
	cocos2d::Sprite* title_jcxx;
	cocos2d::ui::Button* Button_close;
	cocos2d::ui::Button* Button_record;
	cocos2d::ui::ImageView* Image_top;
	cocos2d::Sprite* icon_coin;
	cocos2d::ui::TextAtlas* AtlasLabel_jackpot_num;
	cocos2d::ui::ImageView* Image_down;
	cocos2d::Sprite* last_winner;
	cocos2d::Node* Node_avatar;
	cocos2d::ui::Text* Text_nick;
	cocos2d::ui::Text* Text_time;
	cocos2d::ui::TextAtlas* AtlasLabel_win_num;
	cocos2d::Sprite* wan_text;
	cocos2d::ui::Text* Text_desc;
	cocos2d::ui::Text* Text_rule;
/*************************工具生成结束*************************/
};