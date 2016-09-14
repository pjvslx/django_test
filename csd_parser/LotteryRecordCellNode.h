#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Text;
    }
}

class ResourceManager;
class LotteryRecordCellNode
    : public cocos2d::Node
    , public hydra::ControlHandler
{
public:
    static LotteryRecordCellNode* create();

private:
    LotteryRecordCellNode();
    ~LotteryRecordCellNode();

    bool init();
/*************************工具生成函数*************************/
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
private:
/*************************工具生成开始*************************/
	cocos2d::Node* Node_avatar;
	cocos2d::ui::ImageView* Image_back;
	cocos2d::ui::Text* Text_time;
	cocos2d::ui::Text* Text_nickname;
	cocos2d::ui::Text* Text_money;
/*************************工具生成结束*************************/
};