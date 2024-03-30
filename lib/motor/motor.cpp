#include "motor.hpp"

void Motor::set_position(int pos)
{
    position = position;
}

void Motor::next_motor_position()
{
    if (position >= 120)
    {
        setLeft();
    }
    else if (position <= 50)
    {
        setRight();
    }

    if (isLeft())
    {
        set_position(position--);
    }
    else if (isRight())
    {
        set_position(position++);
    }
}

void Motor::setRight()
{
    direction = "RIGHT";
}

void Motor::setLeft()
{
    direction = "LEFT";
}
bool Motor::isRight()
{
    return direction == "RIGHT";
}

bool Motor::isLeft()
{
    return direction == "LEFT";
}