//Battistin Matilde
//es 38 pagina 127: scrivere una funzione che abbia come parametri il prezzo di vendita e la percentuale di sconto
//e che restituisca il prezzo scontato

#include <iostream>
using namespace std;

float Prezzo;
float PercentualeSconto;

float PrezzoScontato(float Prezzo,float PercentualeSconto)
{
    PrezzoScontato= ((100*PercentualeSconto)/Prezzo)

    return PrezzoScontato;
}

int main() {

cout<< "Inserire il prezzo:    "<<endl;
cin>>Prezzo;

cout<< "Inserire la percentuale dello sconto:   "<<endl;
cin>>PercentualeSconto;

cout<<"il prezzo scontto è:  " <<PrezzoScontato<<endl;

return 0;

}
