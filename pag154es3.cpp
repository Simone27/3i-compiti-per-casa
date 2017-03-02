#include <iostream>

using namespace std;

int main () {
    int N=0;
    int i=0;
    int V[10];
    do {
        cout<<"Inserisci la quantita' dei numeri: "<<endl;
        cin>>N;
    } while (N<=0 || N>10);
    for (i=0; i<N; i++) {
        cout<<"Inserisci il "<<i+1<<" elemento"<<endl;
        cin>>V[i];
    }
    cout<<"L'ordine dei numeri e': "<<endl;
    for (i=0; i<N; i++) {
        cout<<V[i];
    }
    cout<<endl;
    cout<<"L'ordine inverso dei numeri e': "<<endl;
    for (i=N-1; i>=0; i--) {
        cout<<V[i];
    }
    return 0;
}
