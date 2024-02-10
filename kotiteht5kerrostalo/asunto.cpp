#include "asunto.h"

asunto::asunto()
{
    cout << "Asunto luotu" << endl;
}

asunto::~asunto()
{

}

void asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << endl;

}

double asunto::laskeKulutus(double h)
{
    double kulutus = h *asukasMaara * neliot;
    //cout << "Asunnon kulutus, kun hinta = " << h << " on " << kulutus << endl;

    return kulutus;
}
