#include "katutaso.h"


Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;

}
void Katutaso::maaritaAsunnot()
{

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double h)
{
    return as1.laskeKulutus(h)+as2.laskeKulutus(h)+Kerros::laskeKulutus(h);
}
