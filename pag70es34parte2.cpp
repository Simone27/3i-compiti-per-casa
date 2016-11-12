#include <iostream>

using namespace std;

int main () {
    float N=0;
    int M=0;
    float ris=1;
    cout<<"Inserisci la base: ";
    cin>>N;
    cout<<"Inserisci l'esponente: ";
    cin>>M;
    if (M<0) {
        M=M*(-1);
        for (int i=0;i<M;i++) {
            ris=ris*N;
        }
        ris=1/ris;
        cout<<"Il risultato e': "<<ris<<endl;
    }
    else {
        for (int i=0;i<M;i++) {
            ris=ris*N;
        }
        cout<<"Il risultato e': "<<ris<<endl;
    }
    return 0;
}
