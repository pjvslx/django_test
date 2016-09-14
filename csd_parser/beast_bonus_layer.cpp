#include "beast_bonus_layer.h"
#include "ComponentManager.h"
#include "ResourceManager.h"
#include "ui/CocosGUI.h"
#include "OS.h"
#include "UIHelperHydra.h"
#include "Localization.h"

USING_NS_CC;
using namespace hydra;
using namespace ui;
using namespace std;

beast_bonus_layer::beast_bonus_layer()
  : Image_back(nullptr)
  , Text_winner_nick(nullptr)
  , Node_winner_avatar(nullptr)
  , 1(nullptr)
  , 2(nullptr)
  , 3(nullptr)
  , Node_rank_avatar1(nullptr)
  , Node_rank_avatar2(nullptr)
  , Node_rank_avatar3(nullptr)
  , Text_rank_nick1(nullptr)
  , Text_rank_nick2(nullptr)
  , Text_rank_nick3(nullptr)
  , Text_rank_num1(nullptr)
  , Text_rank_num2(nullptr)
  , Text_rank_num3(nullptr)
  , btn_win(nullptr)
  , Button_close(nullptr)
  , Node_winner_num(nullptr)
  , Node_beast(nullptr)
{
}


beast_bonus_layer::~beast_bonus_layer()
{
}

beast_bonus_layer* beast_bonus_layer::create()
{
    beast_bonus_layer *view = new beast_bonus_layer;
    if (view && view->init())
    {
        view->autorelease();
        return view;
    }
    else
    {
        delete view;
        view = nullptr;
        return nullptr;
    }
}

bool beast_bonus_layer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(beast_bonus_layer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void beast_bonus_layer::__addUIEvent()
{
}

/*************************工具生成begin*************************/
void beast_bonus_layer::__setupCocosUI(Node* rootNode)
{
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	Text_winner_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_winner_nick"));
	Node_winner_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_avatar"));
	1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("1"));
	2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("2"));
	3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("3"));
	Node_rank_avatar1 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar1"));
	Node_rank_avatar2 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar2"));
	Node_rank_avatar3 = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_rank_avatar3"));
	Text_rank_nick1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick1"));
	Text_rank_nick2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick2"));
	Text_rank_nick3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_nick3"));
	Text_rank_num1 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num1"));
	Text_rank_num2 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num2"));
	Text_rank_num3 = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rank_num3"));
	btn_win = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("btn_win"));
	Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close"));
	Node_winner_num = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_winner_num"));
	Node_beast = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Node_beast"));
}
/*************************工具生成end*************************/
