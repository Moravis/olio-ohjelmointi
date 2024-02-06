#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
}

kerrostalo::~kerrostalo()
{

}

double kerrostalo::laskeKulutus(double h)
{
    double kerrosTalonKulutus = 0;
    kerrosTalonKulutus=(eka.laskeKulutus(h)+toka.laskeKulutus(h)+kolmas.laskeKulutus(h));
    cout << "Kerrostalon kulutus = " << kerrosTalonKulutus << endl;
    return kerrosTalonKulutus;
}
