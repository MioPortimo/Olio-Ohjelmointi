#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>
using namespace std;

class Katutaso:public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto *pas1,*pas2;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KATUTASO_H
