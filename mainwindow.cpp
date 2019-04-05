#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "mainwindow2.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    getdatetime();
    c=20;
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(countdowntimer()));
    timer->start(1000);
    m_Settingdialog = new   MainWindow2(parent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }

}

void MainWindow::check(){

    int chk=1;
    if(ui->lineEdit_RunTime->text()=="")
        chk=0;
    if(ui->lineEdit_CCO->text()=="")
        chk=0;
    if(ui->lineEdit_CEI->text()=="")
        chk=0;
    if(ui->lineEdit_DCO->text()=="")
        chk=0;
    if(ui->lineEdit_FLO->text()=="")
        chk=0;
    if(ui->lineEdit_Floor->text()=="")
        chk=0;
    if(ui->lineEdit_ISD->text()=="")
        chk=0;
    if(ui->lineEdit_ITA->text()=="")
        chk=0;
    if(ui->lineEdit_ISR->text()=="")
        chk=0;
    if(ui->lineEdit_Mode->text()=="")
        chk=0;
    if(ui->lineEdit_Search->text()=="")
        chk=0;
    if(ui->lineEdit_Signal->text()=="")
        chk=0;
    if(chk==1)
    {
        ui->sysh_6->setStyleSheet("QGraphicsView {background-color:lightgreen;}");
    }
    if(chk==0)
    {
        ui->sysh_6->setStyleSheet("QGraphicsView {background-color:red;}");
    }
}




void MainWindow::on_pushButton_2_clicked()
{
    m_Settingdialog->show();
}


void MainWindow::countdowntimer()
{
    QString a = QString::number(c);

    ui->lineEdit_RunTime->setText(a);

    if(c==0){
        timer->stop();

    }
    c--;
}

void MainWindow::getdatetime()
{
    cd = QDate::currentDate();
    ct= QTime::currentTime();
    QString c=cd.toString();
    QString t=ct.toString();
    ui->Date->setText("Date:"+c);
    ui->Time->setText("Time:"+t);
}


void MainWindow::on_lineEdit_RunTime_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_ISD_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_CEI_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_ISR_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_FLO_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_Search_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_Signal_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_Mode_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_CCO_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_DCO_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_Floor_editingFinished()
{
    check();
}

void MainWindow::on_lineEdit_ITA_editingFinished()
{
    check();
}
