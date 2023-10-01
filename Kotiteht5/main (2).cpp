#include "asunto.h"
#include "kerrostalo.h"

int main()
{
    Asunto olio1;
    Katutaso olio2;
    Kerrostalo olio3;
    olio1.maarita(2,100);
    cout<<"Asunnon kulutus, kun hinta = 1 on "<<olio1.laskeKulutus(1)<<endl;
    olio2.maaritaAsunnot();
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on"<<olio2.laskeKulutus(1)<<endl;
    cout<<"Kerrostalon kulutus, ="<<olio3.laskeKulutus(1)<<endl;

    return 0;
}
