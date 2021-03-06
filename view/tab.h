#ifndef TAB_H
#define TAB_H

//QT
#include<QObject>
#include<QWidget>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QMenuBar>
#include<QTabWidget>
#include<QDialog>
#include<QModelIndex>
#include<QTableView>
#include<QKeyEvent>
#include<QTextEdit>
#include<QAction>
#include<QPushButton>
#include<QHeaderView>
#include<QMessageBox>
#include<QFileDialog>
#include<QDir>

//VIEW
#include"armortab.h"
#include"ringtab.h"
#include"shieldtab.h"
#include"weapontab.h"
#include"additem.h"

//MODEL
#include"../model/model.h"
#include"proxy.h"

//IO
#include"../model/io.h"

class Tab : public QWidget {
   Q_OBJECT
public:
    Tab(QWidget *parent = nullptr);
private:

    //MODEL
    Model *model;
    QSortFilterProxyModel* proxyModel;
    Proxy* proxy;

    //TABS
    ArmorTab* armorTab;
    RingTab* ringTab;
    ShieldTab* shieldTab;
    WeaponTab* weaponTab;

    //TAB AGGIUNTIVA
    QSpacerItem* spacer;
    QGridLayout* groupLayout;
    QGroupBox* information;
    QLabel* infPhysDefL;
    QLabel* infPhysDef;
    QLabel* infMagicDefL;
    QLabel* infMagicDef;
    QLabel* infBalanceL;
    QLabel* infBalance;
    QLabel* infFallingL;
    QLabel* infFalling;
    QLabel* infStabL;
    QLabel* infStab;
    QLabel* infstrScalL;
    QLabel* infstrScal;
    QLabel* infPhysDmgL;
    QLabel* infPhysDmg;
    QLabel* infMagicalDmgL;
    QLabel* infMagicalDmg;
    QLabel* infDxtScalL;
    QLabel* infDxtScal;
    QLabel* infPhysResL;
    QLabel* infPhysRes;
    QLabel* infMagicResL;
    QLabel* infMagicRes;
    QLabel* infStatsIncL;
    QLabel* infStatsInc;
    QLabel* infadditionalL;
    QLabel* infadditionl;
    QLabel* infadditional2L;
    QLabel* infadditional2;
    QTextEdit* desctiption;

    //DIALOG I/O
    QFileDialog* loadDialog;
    QFileDialog* saveDialog;

    //LAYOUT
    QHBoxLayout *horilayout;
    QTabWidget *usertab;

    //ESTENSIONI
    QTextEdit *informationTab;

    void setInformation(AddItem&,bool, QModelIndex);

public slots:

    void addItem();
    void removeItem();
    void modifyItem();
    void createinformation();
    void showData(QModelIndex index);
    void resetInformation();
    void keyPressEvent(QKeyEvent *event);
    void updateFilterRows(int);
    void loadFileDialog();
    void saveFileDialog();
    void destroyInventory();

};

#endif // TAB_H
