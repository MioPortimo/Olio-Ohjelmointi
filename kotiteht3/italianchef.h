#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
using namespace std;
class ItalianChef
{
public:
    ItalianChef(string,int,int);
    ~ItalianChef();
    string getName();
    void makePasta(int,int);
private:
    int vesi;
    int jauhot;
    string name;
};

#endif // ITALIANCHEF_H
