#include "LotteryRecordCellNode.h"
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

LotteryRecordCellNode::LotteryRecordCellNode()
  : Node_avatar(nullptr)
  , Image_back(nullptr)
  , Text_time(nullptr)
  , Text_nickname(nullptr)
  , Text_money(nullptr)
{
}


LotteryRecordCellNode::~LotteryRecordCellNode()
{
}

LotteryRecordCellNode* LotteryRecordCellNode::create()
{
    LotteryRecordCellNode *view = new LotteryRecordCellNode;
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

bool LotteryRecordCellNode::init()
{
    if(!Node::init())
    {
        return false;
    }
	ResourceManager* rm = static_cast<ResourceManager*>(hydra::ComponentManager::instance()->getComponent("resource_manager"));
	/******************需要手动修改createNodeWithType的文件名******************/
	auto entryNode = rm->createNodeWithType(LotteryRecordCellNode, ResourceType::kResourceTypeCSB);
	addChild(entryNode);
	__setupCocosUI(entryNode);
	__addUIEvent();
	return true;
}

void LotteryRecordCellNode::__addUIEvent()
{
}

void LotteryRecordCellNode::onEnter()
{
    Node::onEnter();
}

void LotteryRecordCellNode::onExit()
{
    Node::onExit();
}

/*************************工具生成begin*************************/
void LotteryRecordCellNode::__setupCocosUI(Node* rootNode)
{
	Node_avatar = static_cast<cocos2d::Node*>(rootNode->getChildByName("Node_avatar"));
	Image_back = static_cast<cocos2d::ui::ImageView*>(rootNode->getChildByName("Image_back"));
	Text_time = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_time"));
	Text_nickname = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_nickname"));
	Text_money = static_cast<cocos2d::ui::Text*>(rootNode->getChildByName("Image_back")->getChildByName("Text_money"));
}
/*************************工具生成end*************************/
