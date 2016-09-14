#pragma once
#include "cocos2d.h"
#include "ControlHandler.h"


namespace cocos2d {
    namespace ui {
        class ImageView;
        class Text;
        class Button;
    }
}

class ResourceManager;
class BeastBonusLayer
    : public cocos2d::Layer
    , public hydra::ControlHandler
{
public:
    static BeastBonusLayer* create();

private:
    BeastBonusLayer();
    ~BeastBonusLayer();

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
	cocos2d::ui::Text* m_Text_winner_nick;
	cocos2d::Node* m_Node_winner_avatar;
	cocos2d::Sprite* m_1;
	cocos2d::Sprite* m_2;
	cocos2d::Sprite* m_3;
	cocos2d::Node* m_Node_rank_avatar1;
	cocos2d::Node* m_Node_rank_avatar2;
	cocos2d::Node* m_Node_rank_avatar3;
	cocos2d::ui::Text* m_Text_rank_nick1;
	cocos2d::ui::Text* m_Text_rank_nick2;
	cocos2d::ui::Text* m_Text_rank_nick3;
	cocos2d::ui::Text* m_Text_rank_num1;
	cocos2d::ui::Text* m_Text_rank_num2;
	cocos2d::ui::Text* m_Text_rank_num3;
	cocos2d::Sprite* m_btn_win;
	cocos2d::ui::Button* m_Button_close;
	cocos2d::Node* m_Node_winner_num;
	cocos2d::Node* m_Node_beast;
/*************************工具生成结束*************************/
};