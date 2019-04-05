#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mainwindow2.h>
#include <QTimer>
#include <QDate>
#include <QTime>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    void check();
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void getdatetime();
    void countdowntimer();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    MainWindow2 *m_Settingdialog;
    QTimer *timer;
    int c;
    QDate cd;
    QTime ct;

private slots:
    void on_pushButton_2_clicked();
    void on_lineEdit_ITA_editingFinished();
    void on_lineEdit_Floor_editingFinished();
    void on_lineEdit_DCO_editingFinished();
    void on_lineEdit_CCO_editingFinished();
    void on_lineEdit_Mode_editingFinished();
    void on_lineEdit_Signal_editingFinished();
    void on_lineEdit_Search_editingFinished();
    void on_lineEdit_FLO_editingFinished();
    void on_lineEdit_ISR_editingFinished();
    void on_lineEdit_CEI_editingFinished();
    void on_lineEdit_ISD_editingFinished();
    void on_lineEdit_RunTime_editingFinished();
};

#endif // MAINWINDOW_H
