#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
    class MainWindow2;
}

class MainWindow2 : public QMainWindow {
    Q_OBJECT
public:
    MainWindow2(QWidget *parent = 0);
    ~MainWindow2();



protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow2 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW2_H
