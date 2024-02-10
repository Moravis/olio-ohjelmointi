#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    eka = new katutaso();
    toka = new kerros();
    kolmas = new kerros();
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

kerrostalo::~kerrostalo()
{

}

double kerrostalo::laskeKulutus(double h)
{
    double kerrosTalonKulutus = 0;
    kerrosTalonKulutus=(eka->laskeKulutus(h)+toka->laskeKulutus(h)+kolmas->laskeKulutus(h));
    cout << "Kerrostalon kulutus = " << kerrosTalonKulutus << endl;
    return kerrosTalonKulutus;
}
