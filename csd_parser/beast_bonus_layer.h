#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Text;
        class Button;
    }
}

class ResourceManager;
class beast_bonus_layer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static beast_bonus_layer* create();

private:
    beast_bonus_layer();
    ~beast_bonus_layer();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* Image_back;
	cocos2d::ui::Text* Text_winner_nick;
	cocos2d::Node* Node_winner_avatar;
	cocos2d::Sprite* 1;
	cocos2d::Sprite* 2;
	cocos2d::Sprite* 3;
	cocos2d::Node* Node_rank_avatar1;
	cocos2d::Node* Node_rank_avatar2;
	cocos2d::Node* Node_rank_avatar3;
	cocos2d::ui::Text* Text_rank_nick1;
	cocos2d::ui::Text* Text_rank_nick2;
	cocos2d::ui::Text* Text_rank_nick3;
	cocos2d::ui::Text* Text_rank_num1;
	cocos2d::ui::Text* Text_rank_num2;
	cocos2d::ui::Text* Text_rank_num3;
	cocos2d::Sprite* btn_win;
	cocos2d::ui::Button* Button_close;
	cocos2d::Node* Node_winner_num;
	cocos2d::Node* Node_beast;
/*************************工具生成结束*************************/
};