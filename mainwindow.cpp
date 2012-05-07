#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "soapedeliveryApiBindingProxy.h"
#include <QString>
#include <QMessageBox>
using std::boolalpha;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pBtnSend,SIGNAL(clicked()),this,SLOT(setSpp()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setSpp()
{
  edeliveryApiBindingProxy soap;
  ns1__setSppConfirmation spp_confirm;
  ns1__setSppConfirmationResponse spp_response;
  const char* customEndpoint;

  /**
    assign endpoint to Endpoint line editor
    */
  customEndpoint = ui->lnEdEndPoint->text().trimmed().toAscii().constData();
  //if(strlen(customEndpoint) != 0)
  //strncpy(soap.endpoint,ui->lnEdEndPoint->text().toAscii().constData(),ui->lnEdEndPoint->text().length());

  spp_confirm._xml_USCOREparams = ui->plnTxtParam->toPlainText().toAscii().constData();
  soap.setSppConfirmation(spp_confirm._xml_USCOREparams,spp_response);

  QMessageBox msgBox;
   msgBox.setText(soap.endpoint);
   //msgBox.setText(this->boolToText(spp_response._return_));
   msgBox.exec();





}

QString MainWindow::boolToText(bool b){
    QString str;
    str = (b == true) ? "true" : "false";
    return str;
}

