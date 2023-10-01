#include "katutaso.h"


Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
    pas1 = new Asunto;
    pas2 = new Asunto;

}
void Katutaso::maaritaAsunnot()
{

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    pas1.maarita(2,100);
    pas2.maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    this->Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double h)
{
    return pas1.laskeKulutus(h)+pas2.laskeKulutus(h)+Kerros::laskeKulutus(h);
}
Katutaso::~Katutaso()
{
    delete pas1;
    delete pas2;
}
