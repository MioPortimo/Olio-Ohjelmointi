#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;

class Kerrostalo:public Katutaso,public Kerros
{
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka,Kolmas;
};

#endif // KERROSTALO_H
