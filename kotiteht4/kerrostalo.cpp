#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;

}
double Kerrostalo::laskeKulutus(double h)
{
    double kulutus = h*asukasMaara*neliot;
    cout<<"Asunnon kulutus, kun hinta= "<<h<<" on "<<kulutus<<endl;
    return kulutus;
}
