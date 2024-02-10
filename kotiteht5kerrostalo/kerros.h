#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros
{
public:
    kerros();
    ~kerros();

    virtual void maaritaAsunnot();
    double laskeKulutus(double);

private:
    asunto* as1;
    asunto* as2;
    asunto* as3;
    asunto* as4;

};

#endif // KERROS_H
