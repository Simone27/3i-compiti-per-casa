#include <iostream>

using namespace std;

int main (){
    int n=0;
    int r=0;
    for (int i=0;i<100;i++) {
        n++;
        r=n%2;
        if (r == 0) {
            cout << n<<endl;
        }
    }
    return 0;
}
