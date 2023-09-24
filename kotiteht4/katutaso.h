#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include <iostream>
using namespace std;

class Katutaso:public Asunto
{
public:
    Katutaso();
    Asunto as1,as2;
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
};

#endif // KATUTASO_H
