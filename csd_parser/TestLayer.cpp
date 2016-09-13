#include "TestLayer.h"
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
TestLayer::TestLayer()
  : Button_1(nullptr)
  , Panel_1(nullptr)
{
}


TestLayer::~TestLayer()
{
}

TestLayer* TestLayer::create()
{
    TestLayer *view = new TestLayer;
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

bool TestLayer::init()
{
    if(!Layer::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(TestLayer, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}

/*************************工具生成begin*************************/
void TestLayer::__setupCocosUI(Node* rootNode)
{
	Button_1 = static_cast<cocos2d::ui::Button*>(rootNode->getChildByName("Button_1"));
	Panel_1 = static_cast<cocos2d::ui::Layout*>(rootNode->getChildByName("Panel_1"));
}
/*************************工具生成end*************************/
