#include "BeastJackpot.h"
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

BeastJackpot::BeastJackpot()
  : Image_back(nullptr)
  , title_jcxx(nullptr)
  , Button_close(nullptr)
  , Button_record(nullptr)
  , Image_top(nullptr)
  , icon_coin(nullptr)
  , AtlasLabel_jackpot_num(nullptr)
  , Image_down(nullptr)
  , last_winner(nullptr)
  , Node_avatar(nullptr)
  , Text_nick(nullptr)
  , Text_time(nullptr)
  , AtlasLabel_win_num(nullptr)
  , wan_text(nullptr)
  , Text_desc(nullptr)
  , Text_rule(nullptr)
{
}


BeastJackpot::~BeastJackpot()
{
}

BeastJackpot* BeastJackpot::create()
{
    BeastJackpot *view = new BeastJackpot;
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

bool BeastJackpot::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(BeastJackpot, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void BeastJackpot::__addUIEvent()
{
}

/*************************工具生成begin*************************/
void BeastJackpot::__setupCocosUI(Node* rootNode)
{
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	title_jcxx = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("title_jcxx"));
	Button_close = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_close"));
	Button_record = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Image_back")->getChildByName("Button_record"));
	Image_top = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top"));
	icon_coin = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("icon_coin"));
	AtlasLabel_jackpot_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_top")->getChildByName("AtlasLabel_jackpot_num"));
	Image_down = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down"));
	last_winner = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("last_winner"));
	Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Node_avatar"));
	Text_nick = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_nick"));
	Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("Text_time"));
	AtlasLabel_win_num = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("AtlasLabel_win_num"));
	wan_text = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("Image_back")->getChildByName("Image_down")->getChildByName("wan_text"));
	Text_desc = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_desc"));
	Text_rule = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_rule"));
}
/*************************工具生成end*************************/
