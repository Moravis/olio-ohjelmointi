#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef()
{

}
Chef::Chef(string a)
{
    name = a;
    cout << "Chef " << name << " konstruktori" << endl;
}
Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}
void Chef::makeSoup()
{
    cout << "Chef " << name << " makes salad" << endl;
}
void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

