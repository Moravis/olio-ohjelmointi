#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class italianChef : public Chef
{
public:
    italianChef();
    italianChef(string);
    ~italianChef();
    void makePasta(int, int);
    string getName();
private:
    int vesi = 0;
    int jauhot = 0;
};
#endif // ITALIANCHEF_H
