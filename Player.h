#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
class Player
{
private:
    std::string name;
    int hp;
    int mp;
    void setHP();
    void setMP();
    void setName();
public:
    Player(std::string name,int hp,int mp);
    std::string getName();
    int getHP();
    int getMP();
    void footer();
    void header();
};
#endif