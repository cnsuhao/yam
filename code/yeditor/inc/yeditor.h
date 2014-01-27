#ifndef Y_YEDITOR_H
#define Y_YEDITOR_H

#include "yeditorcommon.h"

#include "yeditor.main.ui.h"
#include "quitreeitem.h"
#include "quitreereshelper.h"
#include "quitreeuihelper.h"

#include <QtWidgets/QMainWindow>

class YEditor : public QMainWindow
{
	struct SRelationship
	{
		YCQUiItem*			_pUiItem;
		YCQUiTreeItem*		_pTreeItem;
	};
	typedef std::map<QString, SRelationship>		ymnamerelationship;

	Q_OBJECT

public:
	YEditor(QWidget* pParent = NULL);
	virtual ~YEditor();

public Q_SLOTS:
	void onClickedOpen();
	void onClickedSave();
	void onClickedExport();
	void onClickedSync();
	void onClickedMenuWindowDockRes();
	void onClickedMenuWindowDockUi();
	void onClickedMenuWindowAreaRes();
	void onClickedMenuWindowAreaUi();
	void onResTreeItemSelected(QTreeWidgetItem* pTreeItem, int iColumn);
	void onResTreeContextMenu(QPoint oPos);
	void onUiTreeItemSelected(QTreeWidgetItem* pTreeItem, int iColumn);
	void onUiTreeContextMenu(QPoint oPos);

public Q_SLOTS:
	void onPressedResItem(YCQUiItem* pUiItem);
	void onPressedUiItem(YCQUiItem* pUiItem);

public Q_SLOTS:
	void onResDockVisibilityChanged(bool bVisible);
	void onResAreaVisibilityChanged(bool bVisible);
	void onClickedResMenuItem_CopyImageSource();
	void onClickedResMenuItem_Tiled();

public Q_SLOTS:
	void onUiDockVisibilityChanged(bool bVisible);
	void onUiAreaVisibilityChanged(bool bVisible);
	void onClickedUiMenuItem_CreateScene();
	void onClickedUiMenuItem_CreatePanel();
	void onClickedUiMenuItem_CreateImage();
	void onClickedUiMenuItem_CreateButton();

private:
	void reloadFile(const yam::ystring& rsFileName);
	void reloadRes(const yam::base::YIFormat*& rpFormat, YCQUiItem* pUiParent, QTreeWidgetItem* pTreeParent);
	void reloadUi(const yam::base::YIWidget*& rpWidget, YCQUiItem* pUiParent, QTreeWidgetItem* pTreeParent);
	QString getFullName(const yam::base::YITree* pTree);
	YCQUiItem* getUiItem(QTreeWidgetItem* pTreeItem) const;
	YCQUiTreeItem* getTreeItem(YCQUiItem* pUiItem) const;

private:
	void refreshResProperty(YCQUiItem*& rpUiItem);
	void refreshUiProperty(YCQUiItem*& rpUiItem);

private:
	void parseArgument(const QStringList& rvStr);
	void exportUiTreeToJson(QTreeWidgetItem* pTreeItem, json::Object& rjObjParent);

private:
	Ui_MainWindow			m_UI;
	ymnamerelationship		m_mRelationship;
	yam::ystring			m_sFileName;
	YCQUiTreeResHelper*		m_pTreeResHelper;
	YCQUiTreeUiHelper*		m_pTreeUiHelper;
};

#endif