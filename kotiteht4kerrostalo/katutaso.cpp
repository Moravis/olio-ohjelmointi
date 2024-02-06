#include "katutaso.h"

katutaso::katutaso()
{
    cout << "Katutaso luotu" << endl;
}

katutaso::~katutaso()
{

}

void katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(as1.asukasMaara, as1.neliot);
    as2.maarita(as2.asukasMaara, as2.neliot);


}

double katutaso::laskeKulutus(double h)
{
    int katuKulutus = 0;
    katuKulutus = (as1.laskeKulutus(h)+as2.laskeKulutus(h));
    return katuKulutus;

}
