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

/*************************工具生成函数开始*************************/
    bool init();
    void __setupCocosUI(cocos2d::Node* rootNode);
    void __addUIEvent();
    virtual void onEnter();
    virtual void onExit();
/*************************工具生成函数结束*************************/
private:
/*************************工具生成开始*************************/
	cocos2d::Node* m_Node_avatar;
	cocos2d::ui::ImageView* m_Image_back;
	cocos2d::ui::Text* m_Text_time;
	cocos2d::ui::Text* m_Text_nickname;
	cocos2d::ui::Text* m_Text_money;
/*************************工具生成结束*************************/
};