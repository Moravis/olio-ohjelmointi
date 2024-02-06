#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class katutaso: public kerros
{
public:
    katutaso();
    ~katutaso();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
private:
    asunto as1;
    asunto as2;

};

#endif // KATUTASO_H
