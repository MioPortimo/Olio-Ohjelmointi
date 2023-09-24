#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;

}
void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
    cout<<"Asunto maaritety asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
double Katutaso::laskeKulutus(double h)
{
    double kulutus = h*asukasMaara*neliot;
    cout<<"Asunnon kulutus, kun hinta= "<<h<<" on "<<kulutus<<endl;
    return kulutus;
}
