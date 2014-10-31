#ifndef PROJECT2_H
#define PROJECT2_H

#include <QWidget>

namespace Ui {
class project2;
}

class project2 : public QWidget
{
    Q_OBJECT

public:
    explicit project2(QWidget *parent = 0);
    ~project2();

private:
    Ui::project2 *ui;
};

#endif // PROJECT2_H
