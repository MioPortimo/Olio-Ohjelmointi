#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;

}
void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
double Kerros::laskeKulutus(double h)
{
    double kulutus = h*asukasMaara*neliot;
    cout<<"Asunnon kulutus, kun hinta= "<<h<<" on "<<kulutus<<endl;
    return kulutus;
}
