#include "yqt2yam.h"
#include "yeditor.h"

#include "quiitem.h"
#include "quitreeitem.h"

namespace yam{ namespace io{

SINGLETON_IMPL(CYQt2Yam);

CYQt2Yam::CYQt2Yam()
{
    //
}

CYQt2Yam::~CYQt2Yam()
{
    //
}

yam::ybool CYQt2Yam::Convert(const YEditor* pEditor, const YCQUiTreeItem* pUiItem, yam::base::YITree* pTree) const
{
    YCQUiItem* pItem = pEditor->getUiItem(pUiItem);
    if (NULL == pEditor || NULL == pItem|| NULL == pUiItem)
    {
        return false;
    }

    yam::base::YIWidget* pWidget = YNULL;
    {
        yam::base::YITree* pTreeUi = pTree->FindChild(YFILE_KEY_UI);
        if (YNULL != pTreeUi && YOBJECT_GETCLASSNAME(yam::base::YCWidget) == pTreeUi->GetClassName())
        {
            pTreeUi->Clear();
            pWidget = (yam::base::YIWidget*)pTreeUi;
        }
        else
        {
            pWidget = new yam::base::YCWidget;
            pWidget->GetId() = YFILE_KEY_UI;
            pTree->AddChild(pWidget);
        }
    }
    return Generate(pEditor, pItem, pUiItem, pWidget);
}

yam::ybool CYQt2Yam::Generate(const YEditor* pEditor, const YCQUiItem* pItem, const YCQUiTreeItem* pUiItem, yam::base::YIWidget*& rpWidget) const
{
    if (NULL == pEditor || NULL == pItem || NULL == pUiItem)
    {
        return false;
    }

    yam::EWidgetType eType = pItem->getType();
    switch (eType)
    {
    case eWidgetType_Scene: {
        GenerateScene(pItem, pUiItem, rpWidget);
        } break;

    case eWidgetType_Panel: {
        rpWidget = new yam::base::YCWidget;
        GeneratePanel(pItem, pUiItem, rpWidget);
        } break;

    default:
        return false;
    }

    GenerateWidgetGroup(pEditor, pUiItem, rpWidget);
    return rpWidget != YNULL;
}

yam::ybool CYQt2Yam::GenerateWidget(const YCQUiItem* pItem, const YCQUiTreeItem* pUiItem, yam::base::YIWidget*& rpWidget) const
{
    if (eWidgetType_Scene != pItem->getType())
    {
        rpWidget->GetId() = pUiItem->text(0).toLocal8Bit().data();
    }
    rpWidget->GetType() = pItem->getType();
    rpWidget->GetLayerWeight() = pItem->getLayerWeight();
    rpWidget->GetBound().Pos.X = pItem->pos().x();
    rpWidget->GetBound().Pos.Y = pItem->pos().y();
    rpWidget->GetBound().Size.X = pItem->size().width();
    rpWidget->GetBound().Size.Y = pItem->size().height();
    //
    return true;
}

void CYQt2Yam::GenerateWidgetGroup(const YEditor* pEditor, const YCQUiTreeItem* pUiItem, yam::base::YIWidget*& rpWidget) const
{
    int iCount = pUiItem->childCount();
    for (int i = 0; i < iCount; ++i)
    {
        YCQUiTreeItem* pUiItemChild = dynamic_cast<YCQUiTreeItem*>(pUiItem->child(i));
        YCQUiItem* pItemChild = pEditor->getUiItem(pUiItemChild);
        yam::base::YIWidget* pWidget = YNULL;
        if (!Generate(pEditor, pItemChild, pUiItemChild, pWidget))
        {
            continue;
        }
        rpWidget->AddChild(pWidget);
    }
}

yam::ybool CYQt2Yam::GenerateScene(const YCQUiItem* pItem, const YCQUiTreeItem* pUiItem, yam::base::YIWidget*& rpWidget) const
{
    //rpWidget->GetBound().Pos.X = pItem->;
    //
    return GenerateWidget(pItem, pUiItem, rpWidget);
}

yam::ybool CYQt2Yam::GeneratePanel(const YCQUiItem* pItem, const YCQUiTreeItem* pUiItem, yam::base::YIWidget*& rpWidget) const
{
    //
    return GenerateWidget(pItem, pUiItem, rpWidget);
}

}}