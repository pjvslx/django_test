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
class LotteryFollowNode
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static LotteryFollowNode* create();

private:
    LotteryFollowNode();
    ~LotteryFollowNode();

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
	cocos2d::ui::Button* m_Button_level_1;
	cocos2d::ui::Text* m_Text_content;
	cocos2d::ui::Button* m_Button_level_2;
	cocos2d::ui::Text* m_Text_content;
	cocos2d::ui::Button* m_Button_level_3;
	cocos2d::ui::Text* m_Text_content;
	cocos2d::ui::Button* m_Button_level_4;
	cocos2d::ui::Text* m_Text_content;
/*************************工具生成结束*************************/
};