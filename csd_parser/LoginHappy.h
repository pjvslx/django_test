#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class LoadingBar;
    }
}

class ResourceManager;
class LoginHappy
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static LoginHappy* create();

private:
    LoginHappy();
    ~LoginHappy();

/*************************工具生成函数开始*************************/
    bool init();
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* m_bg;
	cocos2d::Sprite* m_light1;
	cocos2d::Sprite* m_light2;
	cocos2d::Sprite* m_light3;
	cocos2d::Sprite* m_star;
	cocos2d::Sprite* m_logo;
	cocos2d::ui::ImageView* m_loading_bar_bg;
	cocos2d::ui::LoadingBar* m_LoadingBar;
	cocos2d::Sprite* m_flash;
/*************************工具生成结束*************************/
};