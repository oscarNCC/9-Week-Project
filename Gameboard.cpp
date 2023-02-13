#include "Gameboard.h"

using namespace std;

Gameboard::Gameboard(){
    //   land[(ceil(y/2))*x]='P'; //Default Location
};

void Gameboard::printBoard(EnvironmentsNode *en)
{
    this->col = en->getX();
    this->row = en->getY();
    this->land = en->getLand();
   
    for (int i = 0; i < land.size(); i++)
    {
        cout << land[i];
        cout << " ";
        if ((i + 1) % col == 0)
        {
            cout << "\n";
        }
    };
};
