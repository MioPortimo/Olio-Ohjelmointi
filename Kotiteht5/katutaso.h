#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso:public Kerros
{
public:
    Katutaso();
    Asunto *pas1,*pas2;
    virtual void maaritaAsunnot(void)override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H
