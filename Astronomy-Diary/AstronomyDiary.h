#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AstronomyDiary.h"

class AstronomyDiary : public QMainWindow
{
    Q_OBJECT

public:
    AstronomyDiary(QWidget *parent = nullptr);
    ~AstronomyDiary();

private:
    Ui::AstronomyDiaryClass ui;
};
