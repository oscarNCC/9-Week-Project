#ifndef ENVIRONMENTSNODE_H
#define ENVIRONMENTSNODE_H

#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
class EnvironmentsNode
{
public:
    EnvironmentsNode(int x = 0, int y = 0, std::string name = "");
    char fillBlock=(char)254u;
    int getX();
    int getY();
    std::string getName();
    std::vector<char> getLand();
    void setPlayer(char input);
    int defaultLocacation ;
    int getPlayerLocation();

private:
    int x;
    int y;
    std::string name;
    std::vector<char> land;
    void setX(int x);
    void setY(int y);
    void setName(std::string name);
    void setLand();
    void setDefaultLocation();
    
};

#endif
