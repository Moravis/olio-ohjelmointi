#include <iostream>

#ifndef A_H
#define A_H

using namespace std;

class A
{
public:
    A();
    ~A();

    void public_A();

protected:
    void protected_A();

private:
    void private_A();
    int A_muuttuja;
};

#endif // A_H
