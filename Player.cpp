#include "Player.h"


Player ::Player(std::string name, int hp = 100, int mp = 100)
{
    this->hp = hp;
    this->mp=mp;
    this->name=name;
}

void Player::footer(){
cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
cout<<"Player:"<<this->name<<"           Use w a s d to move~"<<endl;
cout<<"HP:"<<this->hp<<"     "<<endl;            
cout<<"MP:"<<this->mp<<endl;
cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    
};
void Player::header(){
cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
cout<<"Current Location:"<<""<<endl;
cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    
};
