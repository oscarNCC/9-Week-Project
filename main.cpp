#include "Controller.cpp"
int main()
{
    // Set which environt ment
    EnvironmentsNode *en = new EnvironmentsNode(10, 10, "Test Environment");
    Gameboard *gb = new Gameboard();
    Controller *con = new Controller(en, gb);
    Player *player = new Player("Oscar");
  
    while (1)
    {
        con->StartGame(player);
       
    };

    return 0;
};