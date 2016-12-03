//Es40 DA LIO GIOVANNI IV C
#include<iostream>
using namespace std;

struct punto{
    float x;
    float y;
};

struct retta{
    float m;
    float q;
};

bool controllo(retta r, punto p);

int main(){
    retta r;
    punto p;
    cout<<"Inserisci l'ascissa del punto:";
    cin>>p.x;
    cout<<"Inserisci l'ordinata del punto:";
    cin>>p.y;
    cout<<"Inserisci il punto di intersezione con l'asse y:";
    cin>>r.q;
    cout<<"inserisci il coeff. angolare:";
    cin>>r.m;
    if(controllo(r,p))
        cout<<"Il punto appartiene alla retta"<<'\n';
    else
        cout<<"Il punto non appartiene alla retta"<<'\n';
    return 0;
}

bool controllo(retta r, punto p){
    bool appartenenza;
    if (p.y == (r.m*p.x)+r.q) appartenenza= true;
    else appartenenza= false;

    return appartenenza;
}
