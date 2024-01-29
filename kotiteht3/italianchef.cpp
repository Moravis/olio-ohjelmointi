#include "italianchef.h"

italianChef::italianChef(string b)
{
    name=b;
    cout << "Chef " << name << " konstruktori" << endl;
}
italianChef::~italianChef()
{
    cout << "Chef " << name << " destruktori" << endl;
}
string italianChef::getName()
{
    return name;
}
void italianChef::makePasta(int a, int b)
{
    jauhot = a;
    vesi = b;
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " <<jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}
