#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QString>
#include <QPair>
#include <QPushButton>
#include <QTableView>
#include <QStandardItemModel>
#include <QtMath>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QLineEdit *holeSize =new QLineEdit();
    QLineEdit *startAdd =new QLineEdit();
    QLineEdit *processNum =new QLineEdit();
    QLineEdit *processSize =new QLineEdit();
    QPushButton *takeHole = new QPushButton();
    QPushButton *takeProcess = new QPushButton();
    QPushButton *takePNum = new QPushButton();

    QStandardItemModel *pModel = new QStandardItemModel(this); //2 Rows and 3 Columns
    QStandardItemModel *hModel = new QStandardItemModel(this); //2 Rows and 3 Columns

    QTableView *pView = new QTableView(nullptr);
    QTableView *hView = new QTableView(nullptr);
        //view->setModel(model);
    void setHole( QPair<unsigned int,unsigned int> *a){ h[i4h].first=a->first;//??
                                      h[i4h].second=a->second;
                                      i4h++;}
    QPair<unsigned int,unsigned int> getHole(){return h[i4h];}
    QPair<unsigned int,unsigned int> getHole(int *a){return h[*a];}

    void setProcess(unsigned int b){p[i4p]=b; i4p++;}
    int getProcess(){return p[i4p];}
    int getProcess(unsigned int *a){return p[*a];}

    void setPNum(int b){i4pFlag=b; p= new unsigned int[i4pFlag];}
    int getPNum(){return i4pFlag;}

    void setHNum(int b){i4h=b;}
    int getHNum(){return i4h;}

    void insertValue (int positionToInsertAt, unsigned int value1, unsigned int value2);
    void deleteValue (int positionToInsertAt);

private slots:
  //  void takeNum();
    void enterNum();
    void enterHole();
    void enterProcess();
    void firstFit();
    void bestFit();
    void reset();
    void merge();
    void deAllocate();
private:
    Ui::MainWindow *ui;

    unsigned int *p=new unsigned int();
    int i4p=0, i4h=0, i4pFlag=0;
    QPair <unsigned int,unsigned int> *h= new QPair <unsigned int, unsigned int>();
    //QVector <bool> allocated ;

};

#endif // MAINWINDOW_H
