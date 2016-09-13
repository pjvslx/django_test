#include "MyTest.h"
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
MyTest::MyTest()
  : ScrollView_1(nullptr)
  , Image_1(nullptr)
  , AtlasLabel_1(nullptr)
{
}


MyTest::~MyTest()
{
}

MyTest* MyTest::create()
{
    MyTest *view = new MyTest;
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

bool MyTest::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	auto entryNode = rm->createNodeWithType(MyTest, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	return true;
}

/*************************工具生成begin*************************/
void MyTest::__setupCocosUI(Node* rootNode)
{
	ScrollView_1 = static_cast<cocos2d::ui::ScrollView*>(rootNode->getChildByName("ScrollView_1"));
	Image_1 = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("ScrollView_1")->getChildByName("Image_1"));
	AtlasLabel_1 = static_cast<cocos2d::ui::TextAtlas*>(rootNode->getChildByName("ScrollView_1")->getChildByName("AtlasLabel_1"));
}
/*************************工具生成end*************************/
