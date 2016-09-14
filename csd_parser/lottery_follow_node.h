#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Button;
        class Text;
    }
}

class ResourceManager;
class lottery_follow_node
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static lottery_follow_node* create();

private:
    lottery_follow_node();
    ~lottery_follow_node();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* Image_back;
	cocos2d::ui::Button* Button_level_1;
	cocos2d::ui::Text* Text_content;
	cocos2d::ui::Button* Button_level_2;
	cocos2d::ui::Text* Text_content;
	cocos2d::ui::Button* Button_level_3;
	cocos2d::ui::Text* Text_content;
	cocos2d::ui::Button* Button_level_4;
	cocos2d::ui::Text* Text_content;
/*************************工具生成结束*************************/
};