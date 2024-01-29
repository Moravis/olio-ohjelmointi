#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    italianChef Mario("Mario");
    Chef Jyrki("Jyrki");
    Jyrki.makeSalad();
    Mario.makePasta(250, 100);
    Jyrki.makeSoup();

    return 0;
}
