#include "admin.h"
#include "ui_admin.h"
#include <iostream>

using namespace std;
admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("Enter Username");
    ui->password->setPlaceholderText("Enter Password");
}

admin::~admin()
{
    delete ui;
}

void admin::on_login_clicked()
{
    QString user;
    QString pass;
    user = ui->username->text();
    pass= ui->password->text();
    if(user.isEmpty()){
        ui->warning->setText("Enter Username!!!!");
        cout<<"Enter Username"<<endl;
        return;
    }
    if(pass.isEmpty()){
        ui->warning->setText("Enter Password!!!!");
        cout<<"Enter Password"<<endl;
        return;
    }
    if(!user.isEmpty() && !pass.isEmpty()){
        ui->warning->setText("");
    }

}

