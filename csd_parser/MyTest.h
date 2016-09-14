#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ScrollView;
        class ImageView;
        class TextAtlas;
    }
}

class ResourceManager;
class MyTest
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static MyTest* create();

private:
    MyTest();
    ~MyTest();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ScrollView* ScrollView_1;
	cocos2d::ui::ImageView* Image_1;
	cocos2d::ui::TextAtlas* AtlasLabel_1;
/*************************工具生成结束*************************/
};