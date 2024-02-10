#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    kerrostalo* talo;
    talo = new kerrostalo();
    talo->laskeKulutus(1);
    delete talo;
    return 0;
}
