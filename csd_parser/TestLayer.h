#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class Button;
        class Layout;
    }
}

class ResourceManager;
class Testlayer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static Testlayer* create();

private:
    Testlayer();
    ~Testlayer();

    bool init();
/*************************工具生成函数开始*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::ui::Button* Button_1;
	cocos2d::ui::Layout* Panel_1;
/*************************工具生成结束*************************/
};