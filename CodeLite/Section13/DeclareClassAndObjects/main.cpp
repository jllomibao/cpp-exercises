#include <iostream>
#include <string>

using namespace std;

class Player {
    string name;
    int health;
    int xp;
    
    void talk(string);
    bool is_dead();
};

int main() {
    Player frank;
    Player hero;

    Player players[]{ frank, hero };

    Player *enemy (nullptr);
    enemy = new Player;
    delete enemy;

    return 0;
}