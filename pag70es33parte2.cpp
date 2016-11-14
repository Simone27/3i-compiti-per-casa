#include <iostream>

using namespace std;

int main () {
    unsigned int x=0;
    unsigned int y=0;
    int ris=0;
    cout<<"Inserisci la base: ";
    cin>>x;
    cout<<"Inserisci l'esponente: ";
    cin>>y;
    ris=x;
    if (!(x==0&&y==0)){
        for (int i=0;i<=y;i++) {
            ris=ris*x
        }
        cout<<"Il risultato e': "<<ris<<endl;
    }
    else {
        cout<<"0^0 e' indefinito."<<endl;
    }
    return 0;
}
