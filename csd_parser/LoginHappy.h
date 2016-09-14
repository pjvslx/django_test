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

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* bg;
	cocos2d::Sprite* light1;
	cocos2d::Sprite* light2;
	cocos2d::Sprite* light3;
	cocos2d::Sprite* star;
	cocos2d::Sprite* logo;
	cocos2d::ui::ImageView* loading_bar_bg;
	cocos2d::ui::LoadingBar* LoadingBar;
	cocos2d::Sprite* flash;
/*************************工具生成结束*************************/
};