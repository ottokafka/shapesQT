#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
/* This MainWindow name is not the same as the other main window name*/
// default code on creation of the project
namespace Ui {
class MainWindow;
}
// default code on creation of the project
class MainWindow : public QMainWindow
{
    Q_OBJECT

    // default code on creation of the project
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

// these were added automatically through the gui from the buttons
private slots:
    void on_btnArc_clicked();

    void on_btnPolygon_clicked();

    void on_btnCross_clicked();

    void on_btnName_clicked();

    // default code on creation of the project
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
