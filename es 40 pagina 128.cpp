//Battistin Matilde
//es 40 pagina 128: data la retta y=mx+q e il punto P(Xp,Yp), controllare se il punto appartiene alla retta

#include <iostream>
using namespace std;

float m, q, Xp, Yp;
struct punto{
    float Xp;
    float Yp;

} ;

struct retta {
    float m;
    float q;

};

bool Appartenenza (float m, float q, float Yp, float Xp)
    {
        if (Yp=(m*Xp)+q) Appartenenza=true;
        else Appartenenza=false;

        return Appartenenza;
    }


    int main (){
    float m, q, Yp, Xp;

    cout<<"Inserire il coefficiente angolare:  "<<endl;
    cin>>m;
    cout<<"Inserire l'intercetta della retta con l'asse y:  "<<endl;
    cin>>q;
    cout<<"Inserire l'ascissa del punto P:   "<<endl;
    cin>>Xp;
    cout<<"Inserire l'ordinata del punto P:  "<<endl;
    cin>>Yp;


    if (Appartenenza=true) {
        cout<<"Il punto P appartiene alla retta"<<endl;
        }
    else (Apparteneza=false) {
        cout<<"Il punto P non appartiene alla retta"<<endl;
        }
    return 0;
    }
