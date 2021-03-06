#ifndef FRUIT_H
#define FRUIT_H

#include "GameObject.h"
#include "PositionGenerator.h"

class Fruit : public GameObject
{
public:
    Fruit(Renderer &renderingEngine, PositionGenerator& positionGenerator);
    Fruit(Renderer &renderingEngine) = delete;
    void render() override;
    void update() override;

    Point2D getPosition() const;
    void generateNewPosition();

private:
    void generateRandomPosition();

    PositionGenerator &positionGenerator_;
    Point2D position_;
};

#endif