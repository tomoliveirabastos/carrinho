#include "motor.hpp"

void Motor::set_position(int position)
{
    this->position = position;
}

void Motor::next_motor_position()
{
    if (this->position >= 120)
    {
        this->setLeft();
    }
    else if (this->position <= 50)
    {
        this->setRight();
    }

    if (this->isLeft())
    {
        this->set_position(position--);
    }
    else if (this->isRight())
    {
        this->set_position(position++);
    }
}

void Motor::setRight()
{
    this->direction = "RIGHT";
}

void Motor::setLeft()
{
    this->direction = "LEFT";
}
bool Motor::isRight()
{
    return this->direction == "RIGHT";
}

bool Motor::isLeft()
{
    return this->direction == "LEFT";
}