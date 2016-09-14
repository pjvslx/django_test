#include "Testlayer.h"
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

Testlayer::Testlayer()
  : Button_1(nullptr)
  , Panel_1(nullptr)
{
}


Testlayer::~Testlayer()
{
}

Testlayer* Testlayer::create()
{
    Testlayer *view = new Testlayer;
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

bool Testlayer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(Testlayer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void Testlayer::__addUIEvent()
{
}

void Testlayer::onEnter()
{
    Layer::onEnter();
}

void Testlayer::onExit()
{
    Layer::onExit();
}

/*************************工具生成begin*************************/
void Testlayer::__setupCocosUI(Node* rootNode)
{
	Button_1 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_1"));
	Panel_1 = static_cast<cocos2d::ui::Layout*>(rootNode->getChildByName("Panel_1"));
}
/*************************工具生成end*************************/
