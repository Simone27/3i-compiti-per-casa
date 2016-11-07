#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Dammi un numero intero (0 <= n < 1000): "<<endl;
    cin>>n;
    int i=1;
    do {
        cout<<"La "<<i<<" esima cifra da destra e' "<<n%10<<endl;
        n=n/10;
        i++;
    } while (i<=3 && n!=0);
    return 0;
}
