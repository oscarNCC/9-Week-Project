#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <iostream>
#include  <vector>
#include "EnvironmentsNode.h"
class Gameboard
{
public:
    Gameboard();
    void printBoard(EnvironmentsNode *en);
    
private:
    int col;
    int row;   
    std::vector<char> land;
  
};
#endif