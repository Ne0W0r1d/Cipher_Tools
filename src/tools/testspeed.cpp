#include "testspeed.h"
#include "ui_testspeed.h"

TestSpeed_USTC::TestSpeed_USTC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestSpeed_USTC)
{
    ui->setupUi(this);
}

TestSpeed_USTC::~TestSpeed_USTC()
{
    delete ui;
}

void TestSpeed_USTC::targetURL(const QUrl &url) {
    ui->webEngineView->load(url);
}
