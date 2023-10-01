#include "asunto.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo* pkerrostalo = new kerrostalo;
    pkerrostalo->maaritaAsunnot();
    cout<<"Kerrostalon kulutus: "<<pkerrostalo.laskeKulutus(1)<<endl;
    delete pkerrostalo;
    pkerrostalo = nullptr;

    return 0;
}
