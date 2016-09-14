#include "LoginHappy.h"
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
  : m_bg(nullptr)
  , m_light1(nullptr)
  , m_light2(nullptr)
  , m_light3(nullptr)
  , m_star(nullptr)
  , m_logo(nullptr)
  , m_loading_bar_bg(nullptr)
  , m_LoadingBar(nullptr)
  , m_flash(nullptr)
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

void LoginHappy::onEnter()
{
    Layer::onEnter();
}

void LoginHappy::onExit()
{
    Layer::onExit();
}

/*************************工具生成begin*************************/
void LoginHappy::__setupCocosUI(Node* rootNode)
{
	m_bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("bg"));
	m_light1 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light1"));
	m_light2 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light2"));
	m_light3 = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("light3"));
	m_star = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("star"));
	m_logo = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("logo"));
	m_loading_bar_bg = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("loading_bar_bg"));
	m_LoadingBar = static_cast<cocos2d::ui::LoadingBar*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("LoadingBar"));
	m_flash = static_cast<cocos2d::Sprite*>(rootNode->getChildByName("loading_bar_bg")->getChildByName("flash"));
}
/*************************工具生成end*************************/
