#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int game(){
    cout<<"RANDMAX ="<<RAND_MAX<<endl;
    cout<<"Time ="<<time(0)<<endl;
    srand(time(0));//alustetaan satunnaislukugeneraattori
    int satunnainenLuku=1+(rand()%20);//määritetään, miltä väliltä satunnaisluku on(1-19)
    int kayttajaNumero;
    int arvaus =1;
    while(true){
        cout<<"Arvaa luku 0-19 valilta"<<endl;
        cin>>kayttajaNumero;
        if(kayttajaNumero==satunnainenLuku){
            cout<<"Arvasit oikein"<<endl;
            cout<<"Arvauksia: "<<arvaus<<endl;
            break;
        }
        else if(kayttajaNumero<satunnainenLuku){
            cout<<"Arvattu luku on pienempi"<<endl;
            arvaus++;
        }
        else if(kayttajaNumero>satunnainenLuku){
            cout<<"Arvattu luku on suurempi"<<endl;
            arvaus++;
        }
    }
    return kayttajaNumero;
}
int main(){
    cout<<game()<<endl;
}

