#include "b.h"

B::B()
{
    cout << "B konstruktori" << endl;

}
B::~B()
{
    cout << "B destruktori" << endl;
}

void B::public_b()
{
    cout << "public B" << endl;
    protected_A();
}
