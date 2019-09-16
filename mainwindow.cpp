#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPainter"

//default function
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
//default function
MainWindow::~MainWindow()
{
    delete ui;
}

 // change BG color on click
void MainWindow::on_btnArc_clicked()
{

  this->ui->renderArea->setShape(RenderArea::Ark);
//    this->ui->renderArea->setBackgroundColor(Qt::red);
      this->ui->renderArea->repaint();

}
 // change BG color on click
void MainWindow::on_btnPolygon_clicked()
{
//       this->ui->renderArea->setBackgroundColor(Qt::black);
      this->ui->renderArea->setShape(RenderArea::Polygon);
      this->ui->renderArea->repaint();


}
 // change BG color on click
void MainWindow::on_btnCross_clicked()
{
      this->ui->renderArea->setShape(RenderArea::Cross);
      this->ui->renderArea->repaint();

    //    this->ui->renderArea->setBackgroundColor(Qt::yellow);
}
 // change BG color on click
void MainWindow::on_btnName_clicked()
{
      this->ui->renderArea->setShape(RenderArea::Name);
      this->ui->renderArea->repaint();

    // changes the color on click
    //    this->ui->renderArea->setBackgroundColor(Qt::white);
}

void MainWindow::on_btnEllispe_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Ellipse);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnSquare_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Square);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnRectangle_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Rectangle);
    this->ui->renderArea->repaint();
}
