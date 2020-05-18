#include <iostream>
#include <string>

using namespace std;

class Player {
  public: 
    string name;
    int health;
    int xp;

    void talk(string text_to_say){
      cout << name << " says " << text_to_say << endl;
    }
    bool is_dead;
};

class Account {
  public:
    string name;
    double balance;


    bool deposit(double bal){
      balance += bal;
      cout << "In deposit " << endl;
      return true;
    }

    bool withdraw(double bal){
      balance += bal;
      cout << "In withdraw" << endl;
      return true;
    }
};

int main(){
  Account frank_account;
  frank_account.name = "Frank's account";
  frank_account.balance = 5000.0;

  frank_account.deposit(1000.0);
  frank_account.withdraw(500.0);


  Player frank;
  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;

  frank.talk("hello there");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  enemy->xp = 15;

  enemy->talk("I will destroy you!");

  return 0;
}
