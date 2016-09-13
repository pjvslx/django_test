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
class TestLayer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static TestLayer* create();

private:
    TestLayer();
    ~TestLayer();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
	cocos2d::ui::Button* Button_1;
	cocos2d::ui::Layout* Panel_1;
/*************************工具生成结束*************************/
};