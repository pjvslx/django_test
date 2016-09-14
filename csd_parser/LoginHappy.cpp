#include "login_happy.h"
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

LoginHappy::LoginHappy()
  : bg(nullptr)
  , light1(nullptr)
  , light2(nullptr)
  , light3(nullptr)
  , star(nullptr)
  , logo(nullptr)
  , loading_bar_bg(nullptr)
  , LoadingBar(nullptr)
  , flash(nullptr)
{
}


LoginHappy::~LoginHappy()
{
}

LoginHappy* LoginHappy::create()
{
    LoginHappy *view = new LoginHappy;
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

bool LoginHappy::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(LoginHappy, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void LoginHappy::__addUIEvent()
{
}

/*************************工具生成begin*************************/
void LoginHappy::__setupCocosUI(Node* rootNode)
{
	bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("bg"));
	light1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light1"));
	light2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light2"));
	light3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light3"));
	star = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("star"));
	logo = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("logo"));
	loading_bar_bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("loading_bar_bg"));
	LoadingBar = static_cast<cocos2d::ui::LoadingBar*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("LoadingBar"));
	flash = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("flash"));
}
/*************************工具生成end*************************/
