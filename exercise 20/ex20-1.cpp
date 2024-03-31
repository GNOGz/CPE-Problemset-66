#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <set>
using namespace std;

class Monster
{
public:
    int hp;
    int atk;
    int def;
    vector<string> skills;
    Monster(int, int, int, vector<string>);
};

Monster operator+(Monster a, Monster b)
{
    int health = a.hp == b.hp ? a.hp : min(a.hp, b.hp) + rand() % (max(a.hp, b.hp) - min(a.hp, b.hp) + 1);
    int attack = a.atk == b.atk ? a.atk : min(a.atk, b.atk) + rand() % (max(a.atk, b.atk) - min(a.atk, b.atk) + 1);
    int defense = a.def == b.def ? a.def : min(a.def, b.def) + rand() % (max(a.def, b.def) - min(a.def, b.def) + 1);
    set<string> skillsList;
    vector<string> skills;
    for (int i = 0; i < a.skills.size(); i++)
        skillsList.insert(a.skills[i]);
    for (int i = 0; i < b.skills.size(); i++)
        skillsList.insert(b.skills[i]);
    for (auto s : skillsList)
        if (rand() % 2)
            skills.push_back(s);
    return Monster(health, attack, defense, skills);
}

Monster::Monster(int h, int a, int d, vector<string> s)
{
    hp = h;
    atk = a, def = d, skills = s;
}

int main()
{
    srand(time(0));
    vector<string> aS;
    aS.push_back("Sleeper");
    aS.push_back("Pog9");
    Monster a(100, 40, 20, aS);

    vector<string> bS;
    bS.push_back("Sleeper");
    bS.push_back("Pog8");
    Monster b(200, 25, 50, bS);
    Monster c = a + b;
    cout << "HP = " << c.hp;
    cout << "\t ATK = " << c.atk;
    cout << "\t DEF = " << c.def << "\n";
    cout << "SKILLS: \n";
    for (int i = 0; i < c.skills.size(); i++)
    {
        cout << "\t" << c.skills[i] << "\n";
    }
}