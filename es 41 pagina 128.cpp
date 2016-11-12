#include <iostream>
using namespace std;

    float verdure;
    float frutta;
    float pesci;
    float carni;
    float dolci;

void acquisizione ();
float media ();

int main ()
{

acquisizione ();
cout<<"la media degli incassi giornalieri è:   "<<media ();

return 0;
}

void acquisizione()
{
cout<<"inserire l'incasso del reparto verdure:    ";
cin>>verdure;
cout<<"inserire l'incasso del repato frutta:      ";
cin>>frutta;
cout<<"inserire l'incasso del repato pesci:      ";
cin>>pesci;
cout<<"inserire l'incasso del repato carni:      ";
cin>>carni;
cout<<"inserire l'incasso del repato dolci:      ";
cin>>dolci;

}

float media ()
{

  float media;
  media=(verdure+frutta+pesci+carni+dolci)/5;

  return media;

}
