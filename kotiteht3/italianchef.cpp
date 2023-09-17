#include "italianchef.h"

ItalianChef::ItalianChef(string,int,int)
{
    jauhot=250;
    vesi=100;
    cout<<"Chef "<<name<<"kontsruktori"<<endl;

};
ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<"destruktori"<<endl;
};
ItalianChef::getName()
{
    cout<<"Anna nimi:"<<endl;
    cin>>name;
};
ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<"makes pasta using a special recipe"<<endl;
    cout<<"Chef "<<name<<"uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<"uses vesi = "<<vesi<<endl;
}

