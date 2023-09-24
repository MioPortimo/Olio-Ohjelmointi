#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class Kerros:public Asunto
{
public:
    Kerros();
    Asunto as1,as2,as3,as4;
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
};

#endif // KERROS_H
