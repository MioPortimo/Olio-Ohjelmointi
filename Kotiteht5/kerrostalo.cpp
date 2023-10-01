#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    peka = new Katutaso;
    ptoka = new Kerros;
    pkolmas = new Kerros;

}
double Kerrostalo::laskeKulutus(double h)
{
    double katutasonKulutus = peka.laskeKulutus(h);
    double kerrostenKulutus = ptoka.laskeKulutus(h)+pkolmas.laskeKulutus(h);
    return katutasonKulutus+kerrostenKulutus;
}
Kerrostalo::~Kerrostalo()
{
delete peka;
delete ptoka;
delete pkolmas;
}
