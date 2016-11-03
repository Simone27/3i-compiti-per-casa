#include <iostream>

using namespace std;

int main (){
    int n=0;
    int r=0;
    int N=0;
    cout << "Inserisci fino a che numero vuoi sapere i pari: ";
    cin >> N;
    for (int i=0;i<N;i++) {
        n++;
        r=n%2;
        if (r == 0) {
            cout << n<<endl;
        }
    }
    return 0;
}
