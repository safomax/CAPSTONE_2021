#include "intlistdialog.h"
#include "ui_intlistdialog.h"

IntListDialog::IntListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IntListDialog)
{
    ui->setupUi(this);
}

IntListDialog::~IntListDialog()
{
    delete ui;
}



void IntListDialog::on_buttonBox_accepted()
{

}

void IntListDialog::on_buttonBox_rejected()
{

}
