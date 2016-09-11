#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class cocos2d::Node*
        class cocos2d::ui::ImageView*
        class cocos2d::ui::Text*
    }
}

class ResourceManager;
class lottery_record_cell_node
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static lottery_record_cell_node* create();

private:
    lottery_record_cell_node();
    ~lottery_record_cell_node();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
private:
/*************************工具生成开始*************************/
	cocos2d::Node* Node_avatar
	cocos2d::ui::ImageView* Image_back
	cocos2d::ui::Text* Text_time
	cocos2d::ui::Text* Text_nickname
	cocos2d::ui::Text* Text_money
/*************************工具生成结束*************************/
};