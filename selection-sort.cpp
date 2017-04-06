#include <iostream>
#define N 100
using namespace std;

void selection_sort(int v[], int dim);
void stampa(int v[], int dim);

int main(){
    int a[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    int dim = 11;
    selection_sort(a, dim);
    stampa(a, dim);
    return 0;
}

void selection_sort(int v[], int dim){
    int comodo;
    for (int i = 0; i < dim-1; i++){
        for (int j = i+1; j < dim; j++){
            if (v[i] > v[j]){
                comodo = v[i];
                v[i] = v[j];
                v[j] = comodo;
            }
        }
    }
}


void stampa(int v[], int dim){
    for(int i = 0; i < dim; i++){
        cout << v[i] << " ";
    }
}





