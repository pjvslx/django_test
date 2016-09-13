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
class lottery_record_node
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static lottery_record_node* create();

private:
    lottery_record_node();
    ~lottery_record_node();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
	cocos2d::ui::ImageView* Image_back;
	cocos2d::ui::ImageView* Image_title;
	cocos2d::ui::ImageView* Image_time;
	cocos2d::ui::ImageView* Image_nickname;
	cocos2d::ui::ImageView* Image_reward;
	cocos2d::ui::ScrollView* ScrollView_1;
/*************************工具生成结束*************************/
};