#include <iostream>

using namespace std;

int main (){
    int N=0;
    int n=0;
    int mas=0;
    int mino;
    int pos_ma=0;
    int pos_mi=0;
    bool primo_c=true;
    cout << "Inserisci quanti numeri ci sono nella sequenza: ";
    cin >> N;
    cout << "Inserisci i numeri (>0): "<< endl;
    for (int i=0;i<N;i++) {
        cin n;
        if (primo_c == true) {
            n=mino;
        }
        do {
            if (n<=0) {
                cout<< "IL NUMERO DEVE ESSERE MAGGIORE DI 0!"<<endl;
                cin >> n;
            }
        } while (n<=0);
        if (n>mas) {
            mas=n;
            pos_ma=i+1;
        }
        if (n<mino) {
            mino=n;
            pos_mi=i+1;
        }
        primo_c=false;
    }
    cout<< "Il valore massimo e': "<<mas<<"  ed e' in posizione: "<<pos_ma<<endl<<"Il valore minimo e': "<<mino<<" ed e' in posizione: "<<pos_mi<<endl;
    return 0;
}
