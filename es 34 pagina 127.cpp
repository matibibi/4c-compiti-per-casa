//Battistin Matilde
//es 34 pagina 127: Definire una funzione che abbia come parametro un numero intero positivo e che visualizzi la sequanza
//dei primi 5 numeri successivi al numero dato

#include <iostream>
using namespace std;

int main () {

int n;

cout<<"inserire un numero intero positivo:   "endl;
cin>>n;

if (n<0)

    cout <<"inserire un altro numero:   "endl;
    cin>>n;

else
int funzione(int n)
{
     for (int i=0; i>=5; i++)
   {n=n+i;}
   return n;

}
return 0;
}

