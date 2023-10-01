#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();

}
double Kerrostalo::laskeKulutus(double h)
{
    double katutasonKulutus = eka->laskeKulutus(h);
    double kerrostenKulutus = toka->laskeKulutus(h)+Kolmas->laskeKulutus(h);
    return katutasonKulutus+kerrostenKulutus;
}
