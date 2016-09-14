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
class Mytest
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static Mytest* create();

private:
    Mytest();
    ~Mytest();

    bool init();
/*************************工具生成函数开始*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ScrollView* ScrollView_1;
	cocos2d::ui::ImageView* Image_1;
	cocos2d::ui::TextAtlas* AtlasLabel_1;
/*************************工具生成结束*************************/
};