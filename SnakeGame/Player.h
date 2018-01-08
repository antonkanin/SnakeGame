#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Point2D.h"
#include "GameObject.h"
#include "Direction.h"
#include "MovableObserver.h"

class Player : public GameObject, public MovableObserver
{
public:
    Player(Renderer &renderingEngine);
    void render() override;
    void update() override;

    void changeDirection(Direction direction) override;

    void die();
    int getHeadX();
    int getHeadY();
    Point2D getHeadPosition();
    Direction getDirection();
    void increaseLength();
    int getLength() const;

    typedef std::vector<Point2D*>::const_iterator const_iterator;
    const_iterator body_begins() const;
    const_iterator body_ends() const;
    void removeBodyStartingWith(const_iterator positionToRemoveFrom);

private:
    std::vector<Point2D*> m_snakePositions;

    Direction moveDirection_;
    Direction futureMoveDirection_;

    bool isAlive;
    Point2D pointToEraise;
    bool needToIncreaseLength;

    bool oppositeDirections(Direction direction_one, Direction direction_two);
    void moveSnake();
    void moveSnakeHead(Point2D* const snakeHead, Direction direction);
};

#endif
