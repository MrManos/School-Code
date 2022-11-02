#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void attack(double &attackHealth, double &defenderHealth, int move)
{
    if (move == 1)
    {
        double damage_1 = 15.0 + ((double(rand())) / (double(RAND_MAX))) * 15.0;
        cout << "Damage Dealt: " << damage_1 << endl;
        defenderHealth -= damage_1;
        if (defenderHealth < 0)
        {
            defenderHealth = 0;
        }
    }
    else if (move == 2)
    {
        double damage_2 = (double(rand()) / double(RAND_MAX)) * 50.0;
        cout << "Damage Dealt: " << damage_2 << endl;
        defenderHealth -= damage_2;
        if (defenderHealth < 0)
        {
            defenderHealth = 0;
        }
    }
    else if (move == 3)
    {
        double heal = 5 + (double(rand()) / double(RAND_MAX)) * 15.0;
        cout << "Health Gained: " << heal << endl;
        attackHealth += heal;
        if (attackHealth > 100)
        {
            attackHealth = 100;
        }
    }
}
int main()
{
    int move;
    double health_x = 100;
    double health_cpu = 100;
    int turn = 1; // ensures the user goes first
    srand(time(NULL));
    while (health_x > 0 && health_cpu > 0) // both must be true to continue playing
    {
            cout << "Your Health: " << health_x << endl;
            cout << "Computer Health: " << health_cpu << endl;
            if (turn == 1){
            cout << "What move do you want to use (1,2,3)" << endl;
            cin >> move;
            }
        while (move < 1 || move > 3) //only 1 needs to be true
        {
            cout << "\nPlease enter a valid move " << endl;
            cin >> move;
        }
        if (turn == 1)
        {
            cout << "Offense: " << endl;
            attack(health_x, health_cpu, move);
            turn = 2; // switches to the computers turn
        }
        else
        {
            move = 1 + rand() % 3; // chooses move 1, 2 , 3 for the computer
            cout << "\nDefence: " << endl;
            attack(health_cpu, health_x, move);
            turn = 1; // switches to the users turn
        }
    }
    if (health_x <= 0)
    {
        cout << "Defeated" << endl;
    }
    else if (health_cpu <= 0)
    {
        cout << "Victory!" << endl;
    }
    return 0;
}
