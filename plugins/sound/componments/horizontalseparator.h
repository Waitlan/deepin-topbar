#ifndef HORIZONTALSEPARATOR_H
#define HORIZONTALSEPARATOR_H

#include <QWidget>

class HorizontalSeparator : public QWidget
{
    Q_OBJECT

public:
    explicit HorizontalSeparator(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // HORIZONTALSEPARATOR_H
