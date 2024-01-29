#include "postilaatikko1"
#include <iostream>
using namespace std;

postilaatikko1::postilaatikko1()
{

}

void postilaatikko1::lisaaPosti(int m)
{
    cout << "lisataan postia " << m << endl;
    maara = maara + m;
    cout << "maara on " << m << endl;
}

void postilaatikko1::otaPosti(int m)
{
    cout << "otetaan posti " << endl;

}

void postilaatikko1::asetaNimi(string n)
{
    cout << "Asetetaan nimi " << endl;

}
