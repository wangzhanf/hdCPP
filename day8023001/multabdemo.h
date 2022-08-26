#ifndef MULTABDEMO_H
#define MULTABDEMO_H

#include <QWidget>

namespace Ui {
class MulTabDemo;
}

class MulTabDemo : public QWidget
{
    Q_OBJECT

public:
    explicit MulTabDemo(QWidget *parent = nullptr);
    ~MulTabDemo();

private:
    Ui::MulTabDemo *ui;
};

#endif // MULTABDEMO_H
