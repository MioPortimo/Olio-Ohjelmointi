#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class Kerros:public Asunto{
public:
    Kerros();
    ~Kerros();
    Asunto* pas1;
    Asunto* pas2;
    Asunto* pas3;
    Asunto* pas4;
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);
};

#endif // KERROS_H
