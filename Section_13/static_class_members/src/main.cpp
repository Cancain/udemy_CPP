#include <iostream>
#include "Player.h"

void display_active_players(){
  std::cout << "Active players: " << Player::get_num_players() << std::endl;
}

int main(int argc, char *argv[]){
  display_active_players();
  
  Player hero("Hero");

  display_active_players();

  {
    Player frank("Frank");
    display_active_players();
  }

  display_active_players();

  Player *enemy = new Player("Enemy", 100, 100);
  display_active_players();
  delete  enemy;

  return 0;
}
