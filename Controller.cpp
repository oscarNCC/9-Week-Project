#include "Controller.h"
using namespace std;

Controller::Controller(EnvironmentsNode *en, Gameboard *gb)
{
this->en=en;
this->gb=gb;
};

void Controller::StartGame(Player *player)
{
   
    cout << en->getName() << endl;//Location name
    player->header();
    gb->printBoard(en);
    player->footer();
    char input;
    cin >> input;
    cout << "----------------" << endl;
    en->setPlayer(input);
    cout << en->getName() << endl;
    gb->printBoard(en);
    player->footer();
};
