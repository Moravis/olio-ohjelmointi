#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    asunto asuntoOlio;
    katutaso katuOlio;
    kerros kerrosOlio;
    kerrostalo taloOlio;

    //asuntoOlio.maarita(2,100);
    //asuntoOlio.laskeKulutus(1);

    katuOlio.maaritaAsunnot();
    kerrosOlio.maaritaAsunnot();


    taloOlio.laskeKulutus(1);

    return 0;
}
