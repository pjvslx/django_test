#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class ScrollView;
    }
}

class ResourceManager;
class LotteryRecordNode
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static LotteryRecordNode* create();

private:
    LotteryRecordNode();
    ~LotteryRecordNode();

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
	cocos2d::ui::ImageView* m_Image_title;
	cocos2d::ui::ImageView* m_Image_time;
	cocos2d::ui::ImageView* m_Image_nickname;
	cocos2d::ui::ImageView* m_Image_reward;
	cocos2d::ui::ScrollView* m_ScrollView_1;
/*************************工具生成结束*************************/
};