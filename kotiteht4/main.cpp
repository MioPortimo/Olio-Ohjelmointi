#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

int main()
{
    Asunto olio1;
    olio1.maarita(2,100);
    Katutaso olio2;
    olio2.maaritaAsunnot();
    Kerros olio3;
    olio3.maaritaAsunnot();
    Kerrostalo olio4;
    olio4.laskeKulutus(1);

    return 0;
}
