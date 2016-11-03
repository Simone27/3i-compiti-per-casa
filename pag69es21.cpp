#include <iostream>

using namespace std;

int main () {
    int N=0;
    int n=0;
    int r=0;
    int s=0;
    do {
        cout << "Inserisci quanti numeri vuoi sommare (<100): "<<endl;
        cin >> N;
    } while (N>=100);
    for (int i=0;i<N;i++) {
        n=0;
        cout << "Inserisci il numero: "<<endl;
        cin >> n;
        r = n%2;
        if (r==1 || r==-1) {
           s=s+n;
        }
    }
    cout << "La somma e': "<<s<<endl;
    return 0;
}
