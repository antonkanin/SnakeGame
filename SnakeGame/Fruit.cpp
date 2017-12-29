#include <stdio.h>
#include "Fruit.h"
#include "Utils.h"

void Fruit::render()
{
    Utils::PrintText(m_position.x, m_position.y, "F");
}

void Fruit::update()
{
}

int Fruit::getX()
{
    return m_position.x;
}

int Fruit::getY()
{
    return m_position.y;
}

Point2D Fruit::getPosition()
{
    return m_position;
}

void Fruit::generateNewPosition()
{
    generateRandomPosition();
}

void Fruit::generateRandomPosition()
{
    m_position.x = rand() % (Constants::GAME_FIELD_WIDTH - 2) + 2;
    m_position.y = rand() % (Constants::GAME_FIELD_HEIGHT - 2) + 2;
}