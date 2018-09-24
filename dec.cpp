#include "dec.h"
#include "ui_dec.h"

dec::dec(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dec)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0, 1000, this));
    ui->lineEdit_2->setValidator(new QIntValidator(0, 1000, this));

}

dec::~dec()
{
    delete ui;
}


void dec::on_pushButton_clicked()
{
    ui->textEdit->setText("");
    QString bits =ui->lineEdit_2->text();//È¡¿ò2£»
   QString text = ui->lineEdit->text();//È¡¿ò1£»


   if(bits.toInt()!=16){
   QString t = QString::number(text.toInt(), bits.toInt());
   ui->textEdit->setText(t);
}
if(bits.toInt()==16){
    QString key;
  key =  QString("0x%1").arg(text.toInt(),4,16,QLatin1Char('0'));

    ui->textEdit->setText(QString(key));
}


}

//................................................

