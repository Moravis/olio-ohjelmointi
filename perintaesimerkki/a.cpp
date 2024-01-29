#include "a.h"


A::A()
{
    cout << "A konstruktori" << endl;
}

A::~A()
{
    cout << "A destruktori" << endl;
}

void A::public_A()
{
    cout << "public A " << endl;
    A_muuttuja = 3;
}

void A::protected_A()
{
    cout << "protected A" << endl;

}
