#include "kerros.h"

kerros::kerros()
{
    cout << "Kerros luotu" << endl;
}

kerros::~kerros()
{
}

void kerros::maaritaAsunnot()
{

    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1.maarita(as1.asukasMaara, as1.neliot);
    as2.maarita(as2.asukasMaara, as2.neliot);
    as3.maarita(as3.asukasMaara, as3.neliot);
    as4.maarita(as4.asukasMaara, as4.neliot);

}

double kerros::laskeKulutus(double h)
{
    double kerrosKulutus = 0;
    kerrosKulutus = (as1.laskeKulutus(h)+as2.laskeKulutus(h)+as3.laskeKulutus(h)+as4.laskeKulutus(h));
    return kerrosKulutus;
}
