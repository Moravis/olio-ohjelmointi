#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();
    string name="";
    void makeSalad();
    void makeSoup();
};



#endif // CHEF_H
