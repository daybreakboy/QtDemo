#ifndef MAINDEMO_H
#define MAINDEMO_H

#include <QMainWindow>

namespace Ui {
class MainDemo;
}

class MainDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainDemo(QWidget *parent = 0);
    ~MainDemo();

private:
    Ui::MainDemo *ui;
};

#endif // MAINDEMO_H
