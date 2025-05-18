#ifndef MYVIEW_H
#define MYVIEW_H

#include <QGraphicsView>
#include <QWidget>

class BoxGroup;

class MyView : public QGraphicsView
{
private:
    BoxGroup* boxGroup;
    BoxGroup* nextBoxGroup;
    QGraphicsLineItem* topLine;
    QGraphicsLineItem* bottomLine;
    QGraphicsLineItem* leftLine;
    QGraphicsLineItem* rightLine;
    qreal gameSpeed;
    QList<int> rows;

    void initView();
    void initGame();
    void updateScore(const int fullRowNum = 0);

public:
    explicit MyView(QWidget* parent = 0);

public slots:
    void startGame();
    void clearFullRows();
    void moveBox();
    void gameOver();
};

#endif  // MYVIEW_H
