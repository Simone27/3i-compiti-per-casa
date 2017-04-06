#include <iostream>
#define N 100
using namespace std;

void selection_sort(int v[], int dim);
void bubble_sort(int v[], int dim);
void stampa(int v[], int dim);

int main(){
    int a[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    int dim = 11;
    selection_sort(a, dim);
    stampa(a, dim);
    cout << endl;
    int b[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    bubble_sort(b, dim);
    stampa(b, dim);
    cout << endl;
    return 0;
}

void bubble_sort(int v[], int dim){
    int i,k,sup,comodo;
    bool continua = true;
    bool ciclo = false;
    k = dim;
    while(continua){
        sup = k;
        if (ciclo) {
            sup=sup+1;
        }
        continua = false;
        /*cout<<"sup= "<<sup<<endl;
        cout<<"finito il ciclo"<<endl;*/
        for(i = 0; i < sup -1; i++)
        if (v[i]>v[i+1]){
            comodo = v[i];
            v[i] = v[i+1];
            v[i+1] = comodo;
            continua = true;
            k = i;
            ciclo=true;
            /*cout<<"k= "<<k<<endl;
            stampa(v, dim);
            cout<<endl;*/
        }
    }
}

void selection_sort(int v[], int dim){
    int comodo;
    for (int i = 0; i < dim-1; i++){
        for (int j = i+1; j < dim; j++){
            if (v[i] > v[j]){
                comodo = v[i];// a cosa serve comodo?
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





