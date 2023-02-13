#include "EnvironmentsNode.h"

int EnvironmentsNode::getX()
{
    return this->x;
};
int EnvironmentsNode::getY()
{
    return this->y;
};
std::string EnvironmentsNode::getName()
{
    return this->name;
};
std::vector<char> EnvironmentsNode::getLand()
{
    return this->land;
}
int EnvironmentsNode::getPlayerLocation()
{
    int index;
    char player = 'P';
    auto result = std::find(land.begin(), land.end(), player);
    index = std::distance(land.begin(), result);
    return index;
};
void EnvironmentsNode::setX(int x)
{
    this->x = x;
};
void EnvironmentsNode::setY(int y)
{
    this->y = y;
};
void EnvironmentsNode::setName(std::string name)
{
    this->name = name;
};
void EnvironmentsNode::setLand()
{
    land = std::vector<char>(x * y, fillBlock);
};
void EnvironmentsNode::setPlayer(char input) //WASD of player
{
    int current = getPlayerLocation();

    if (input == 'w')
    {
        if (current - y >= 0)
        {
            land[current] = fillBlock;
            land[current - y] = 'P';
        }
    }
    if (input == 's')
    {
        if (current + y <= x * y - 1)
        {
            land[current] = fillBlock;
            land[current + y] = 'P';
        }
    }
    if (input == 'd')
    {
        if (current + 1 < x * y && (current + 1) % x != 0)
        {
            land[current] = fillBlock;
            land[current + 1] = 'P';
        }
    }
    if (input == 'a')
    {
        if (current > 0 && (current % x) != 0)
        {
            land[current] = fillBlock;
            land[current - 1] = 'P';
        }
    }
};

// land[current+move_x]='P';

void EnvironmentsNode::setDefaultLocation()
{
    this->land[ceil(y / 2) * x] = 'P';
}
EnvironmentsNode::EnvironmentsNode(int x, int y, std::string name)
{

    setX(x);
    setY(y);
    setName(name);
    setLand();
    setDefaultLocation();
};
