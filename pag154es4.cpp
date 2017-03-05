#include <iostream>

using namespace std;

int main () {
    int n=0;
    int v[10];
    int p=1;
    int s=0;
    do {
        cout<<"Inserisci il numero di elementi: ";
        cin>>n;
    } while (n<=0 || n>10);
    for (int i=0; i<n; i++) {
        cout<<"Inserisci il "<<i+1<<" elemento: ";
        cin>>v[i];
    }
    for (int i=0; i<n; i=i+2) {
        p=p*v[i];
    }
    for (int i=1; i<n; i=i+2) {
        s=s+v[i];
    }
    cout<<"Il prodotto e': "<<p<<endl;
    cout<<"La somma e': "<<s<<endl;
    return 0;
}
