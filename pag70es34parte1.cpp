#include <iostream>

using namespace std;

int main () {
    float N=0;
    unsigned int M=0;
    float ris=1;
    cout<<"Inserisci la base: ";
    cin>>N;
    cout<<"Inserisci l'esponente (>=0): ";
    cin>>M;
    for (int i=0;i<M;i++) {
        ris=ris*N;
    }
    cout<<"Il risultato e': "<<ris<<endl;
    return 0;
}
