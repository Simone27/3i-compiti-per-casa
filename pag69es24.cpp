#include <iostream>

using namespace std;

int main (){
    int N=0;
    int n=0;
    int mas=0;
    int mi_n;
    cout << "Inserisci quanti numeri ci sono nella sequenza: ";
    cin >> N;
    cout << "Inserisci i numeri (>0): "<< endl;
    for (int i=0;i<N;i++) {
        cin >> n;
        do {
            if (n<=0) {
                cout<< "IL NUMERO DEVE ESSERE MAGGIORE DI 0!"<<endl;
                cin >> n;
            }
        } while (n<=0);
        if (n>mas) {
            mas=n;
        }
        if (n<mi_n) {
            mi_n=n;
        }
    }
    cout<< "Il valore massimo e': "<<mas<<endl<<"Il valore minimo e': "<<mi_n<<endl;
    return 0;
}
