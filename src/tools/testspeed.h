#ifndef TESTSPEED_H
#define TESTSPEED_H

#include <QtWebEngineWidgets>
#include <QDialog>

#pragma once

namespace Ui {
class TestSpeed_USTC;
}

class TestSpeed_USTC : public QDialog
{
    Q_OBJECT

public:
    explicit TestSpeed_USTC(QWidget *parent = nullptr);
    ~TestSpeed_USTC();

    void targetURL(const QUrl &url);

private:
    Ui::TestSpeed_USTC *ui;
};

#endif // TESTSPEED_H
