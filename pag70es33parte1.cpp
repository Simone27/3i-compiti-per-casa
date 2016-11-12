#include <iostream>

using namespace std;

int main () {
    unsigned int x=0;
    unsigned int y=0;
    int ris=1;
    cout<<"Inserisci la base: ";
    cin>>x;
    cout<<"Inserisci l'esponente: ";
    cin>>y;
    for (int i=0;i<y;i++) {
        ris=ris*x;
    }
    cout<<"Il risultato e': "<<ris<<endl;
    return 0;
}
