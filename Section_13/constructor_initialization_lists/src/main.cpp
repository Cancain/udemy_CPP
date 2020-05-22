#include <iostream>
#include <string>

class Player{
  private:
    std::string name {"XXXXXXXXXX"};
    int health;
    int xp;

  public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

  Player::Player()
    : name{"None"}, health{0}, xp{0}{}

  Player::Player(std::string name_val):
    name{name_val}, health{0}, xp{0}{}

  Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val}{}

int main(){
  Player empty;
  Player frank {"Frank"};
  Player Villain {"Villain", 100, 66};

  return 0;
}