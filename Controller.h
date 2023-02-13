#include <iostream>
#include <string>
#include "EnvironmentsNode.cpp"
#include "Gameboard.cpp"
#include "Player.cpp"


class Controller {
    public : 
        Controller(EnvironmentsNode *en, Gameboard *gb);
        EnvironmentsNode *en;
        Gameboard *gb;
        Player *player;
        void StartGame(Player *p);
};