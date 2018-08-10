#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    pModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Process")));
    pModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Size")));

    pView =ui->tableView_1;
    pView->setModel(pModel);
    pView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    hModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Address")));
    hModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Size")));

    hView =ui->tableView_2;
    hView->setModel(hModel);
    hView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    holeSize    = ui->lineEdit_1;
    startAdd = ui->lineEdit_2;
    processNum =ui->lineEdit_3;
    processSize = ui->lineEdit_4;
    takeHole = ui->uiTakeHole;
    takeProcess = ui->uiTakeProcess;
    takePNum = ui->uiTakePNum;
   // processView =ui->tableView_1;
   // holeView = ui->tableView_2;
   //QObject::connect(takePNum, SIGNAL (released()),this, SLOT (handleButton()));
}
void MainWindow::enterNum()
{
    //ui->tableView_1->setAccessibleName("plapla");
   setPNum(processNum->text().toInt());
 /*  QStandardItem *firstRow = new QStandardItem(QString(QString::number(i4p)));
   firstRow->setBackground(QBrush (QColor(0, 255,127,255)
                                  , Qt::BrushStyle ::BDiagPattern));
   hModel->setItem(0,0,firstRow);*/
}

void MainWindow::enterProcess()
{
   setProcess(processSize->text().toInt());
    QStandardItem *first= new QStandardItem(QString("P"+QString::number(i4p-1)));
    first->setBackground(QBrush (QColor(255, 204,204,255)
                                   , Qt::BrushStyle ::SolidPattern));
    QStandardItem *second= new QStandardItem((QString::number(p[i4p-1])));
    second->setBackground(QBrush (QColor(255, 204,204,255)
                                   , Qt::BrushStyle ::SolidPattern));
    pModel->setItem(i4p-1,0,first);
    pModel->setItem(i4p-1,1,second);
    first =NULL;
    delete first;
    second =NULL;
    delete second;
}

void MainWindow::enterHole()
{
    QPair <unsigned int,unsigned int> *t=new  QPair <unsigned int,unsigned int>();
    t->first=startAdd->text().toInt();
    t->second=holeSize->text().toInt();
    setHole(t);
    QStandardItem *first= new QStandardItem(QString(QString::number(t->first)));
     first->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::SolidPattern));
     QStandardItem *second= new QStandardItem((QString::number(t->second)));
     second->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::SolidPattern));
     hModel->setItem(i4h-1,0,first);
     hModel->setItem(i4h-1,1,second);
     first =NULL;
     delete first;
     second =NULL;
     delete second;
}
void MainWindow::firstFit()
{
    //hModel->clear();
    QVector <bool> allocated(i4h,false);
for(int i=0;i<i4p;i++)
    {
    for(int j=0;j<i4h;j++)
    {
        if(allocated[j]==true) continue;
        int k=h[j].second-p[i];
        if(k==0) //the hole fits right
        {

        QStandardItem *first= new QStandardItem(QString::number(h[j].first));
         first->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::BDiagPattern));
         QStandardItem *second= new QStandardItem("P"+QString::number(i)+"= "+
                                                      QString::number(h[j].second));
         second->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::BDiagPattern));
         hModel->setItem(j,0,first);
         hModel->setItem(j,1,second);
         allocated[j]=true;
         first =NULL;
         delete first;
         second =NULL;
         delete second;

         break;
        }
        else if(k>0)//hole = p + more
        {
        QStandardItem *first= new QStandardItem(QString::number(h[j].first));
         first->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::BDiagPattern));
         QStandardItem *second= new QStandardItem("P"+QString::number(i)+"= "+
                                                      QString::number(p[i]));
         second->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::BDiagPattern));
         hModel->setItem(j,0,first);
         hModel->setItem(j,1,second);
         h[j].second=p[i];

         QStandardItem *t1=new QStandardItem(QString::number(h[j].first+p[i]));
         QStandardItem *t2=new QStandardItem(QString::number(k));
         t1->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::SolidPattern));
         t2->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::SolidPattern));
         insertValue(j+1,h[j].first+p[i],k);
         hModel->insertRow(j+1);
         hModel->setItem(j+1,0,t1);
         hModel->setItem(j+1,1,t2);
         allocated.insert(j+1,false);
         allocated[j]=true;
         first =NULL;
         delete first;
         second =NULL;
         delete second;
         t1 =NULL;
         delete t1;
         t2 =NULL;
         delete t2;
         break;
        }
       /* else
        {
        QStandardItem *first= new QStandardItem(QString::number(h[j].first));
         first->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::SolidPattern));
         QStandardItem *second= new QStandardItem(QString::number(h[j].second));
         second->setBackground(QBrush (QColor(153, 204, 255,255)
                                        , Qt::BrushStyle ::SolidPattern));
         hModel->setItem(j,0,first);
         hModel->setItem(j,1,second);
         first =NULL;
         delete first;
         second =NULL;
         delete second;
        }*/
       // abs(k);
    }
    }
}
void MainWindow::bestFit()
{
        QVector <bool> allocated(i4h,false);
for(int r=0;r<i4p; r++)
{
    unsigned int bestFit=-1; int m=-1;
    for (int i = 0; i < i4h; i++)
    {
        if ( int(h[i].second- p[r]) >= 0 && h[i].second < bestFit)
        {
            bestFit = h[i].second;
            m=i;
        }
    }
    if(m<0) continue;
    if(allocated[m]==true) continue;
    int k=h[m].second-p[r];
    if(k==0) //the hole fits right
    {

    QStandardItem *first= new QStandardItem(QString::number(h[m].first));
     first->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::BDiagPattern));
     QStandardItem *second= new QStandardItem("P"+QString::number(r)+"= "+
                                                  QString::number(h[m].second));
     second->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::BDiagPattern));
     hModel->setItem(m,0,first);
     hModel->setItem(m,1,second);
     allocated[m]=true;
    }
    else if(k>0)//hole = p + more
    {
    QStandardItem *first= new QStandardItem(QString::number(h[m].first));
     first->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::BDiagPattern));
     QStandardItem *second= new QStandardItem("P"+QString::number(r)+"= "+
                                                  QString::number(p[r]));
     second->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::BDiagPattern));
     hModel->setItem(m,0,first);
     hModel->setItem(m,1,second);
     h[m].second=p[r];

     QStandardItem *t1=new QStandardItem(QString::number(h[m].first+p[r]));
     QStandardItem *t2=new QStandardItem(QString::number(k));
     t1->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::SolidPattern));
     t2->setBackground(QBrush (QColor(153, 204, 255,255)
                                    , Qt::BrushStyle ::SolidPattern));
     insertValue(m+1,h[m].first+p[r],k);
     hModel->insertRow(m+1);
     hModel->setItem(m+1,0,t1);
     hModel->setItem(m+1,1,t2);
     allocated.insert(m+1,false);
     allocated[m]=true;
     first =NULL;
     delete first;
     second =NULL;
     delete second;
     t1 =NULL;
     delete t1;
     t2 =NULL;
     delete t2;
    }


    }
}

void MainWindow::reset()
{
    p=new unsigned int();
    i4p=0; i4h=0; i4pFlag=0;
    h= new QPair <unsigned int, unsigned int>();
    pModel->clear();
    hModel->clear();
}
void MainWindow::insertValue (int positionToInsertAt,
                              unsigned int value1,unsigned int value2)
{
  // Create the new array - user must be told to delete it at some point
  QPair<unsigned int,unsigned int> *newArray = new QPair<unsigned int,unsigned int>[i4h+ 1];  
  for (int i=0; i<=i4h; i++)
  {
    if (i < positionToInsertAt)  // All the elements before the one that must be inserted
    {
       newArray[i].first = h[i].first;
       newArray[i].second = h[i].second;
    }

    if (i == positionToInsertAt)  // The right place to insert the new element
    {
      newArray[i].first = value1;
      newArray[i].second = value2;
    }

    if (i > positionToInsertAt)  // Now all the remaining elements
    {
      newArray[i].first = h[i-1].first;
      newArray[i].second = h[i-1].second;
    }
  }
  h=newArray;
  i4h+=1;

}
void MainWindow::deleteValue (int positionToInsertAt)
{
  // Create the new array - user must be told to delete it at some point
  QPair<unsigned int,unsigned int> *newArray = new QPair<unsigned int,unsigned int>[i4h+ 1];
  for (int i=0; i<i4h-1; i++)
  {
    if (i < positionToInsertAt)  // All the elements before the one that must be inserted
    {
       newArray[i].first = h[i].first;
       newArray[i].second = h[i].second;
    }

    if (i >= positionToInsertAt)  // Now all the remaining elements
    {
      newArray[i].first = h[i+1].first;
      newArray[i].second = h[i+1].second;
    }
  }
  h=newArray;
  i4h-=1;

}
void MainWindow::merge()
{
for(int i=0; i<i4h; i++)
{
    for(int j=0; j<i4h; j++)
    {
        if(h[i].first+h[i].second==h[j].first)
        {//merge two in i then delete j
            h[i].second+=h[j].second;
            deleteValue(j);
             QStandardItem *second= new QStandardItem(QString::number(h[i].second));
             second->setBackground(QBrush (QColor(153, 204, 255,255)
                                            , Qt::BrushStyle ::SolidPattern));
            hModel->setItem(i,1,second);
            hModel->removeRow(j);
        }
    }
}
}
void MainWindow::deAllocate()
{
for(int i=0;i<i4p ;i++)
{
    if(p[i]==processSize->text().toInt())
    {
        for (int j=i; j<i4p-1; j++)
        {
            p[j]=p[j+1];
        }
        i4p-=1;
        pModel->removeRow(i);
    }
}
}
MainWindow::~MainWindow()
{
    delete ui;
}
