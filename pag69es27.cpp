#include <iostream>
#include <cmath>
using namespace std;

int main (){
    unsigned int n;
    cout<<"Inserisci un numero positivo, io ti diro' se e' primo: "<<endl;
    cin>>n;
    bool primo=true;
    for (int divisore=2;divisore<n;divisore++) {
        if (n%divisore==0) {
            primo=false;
            break;
        }
    }
    if (primo)
        cout<<"Si, e' primo."<<endl;
    else
        cout<<"No, non e' primo."<<endl;
    return 0;
}
