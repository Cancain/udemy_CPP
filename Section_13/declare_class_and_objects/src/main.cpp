#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
  // Attributes
  string name {"Player"};
  int health {100};
  int xp {3};

  // Methods
  void talk(string);
  bool is_dead();
};

class Account {
  string name {"Account"};
  double balance {0.0};

  bool deposit(double);
  bool withdraw(double);
};

int main(){
  Player frank;
  Player hero;

  Player players[] {frank, hero};

  vector<Player> player_vec {frank};
  player_vec.push_back(hero);

  Player *enemy {nullptr};
  enemy = new Player;

  delete enemy;


  return 0;
}
