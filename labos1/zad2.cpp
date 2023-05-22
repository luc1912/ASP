#include<iostream>
#include<cmath>
#include <time.h>
using namespace std;

int zbrojiKvadrate (int polje[], int n){
    int rezultat = 0;
    if(n > 0)
        rezultat += zbrojiKvadrate(polje, n-1);
        if((int)sqrt(polje[n-1]) == sqrt(polje[n-1]))
            rezultat += polje[n-1];

    return rezultat;
}

int main(void){
    int n;
    srand(time(NULL));
    cout << "Unesite n > ";
    cin >> n;
    cout << endl;

    int *A = new int[n];
    for (int i = 0; i < n; i++){
        A[i] = rand()%100 + 1;
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Zbroj kvadrata" << " " << zbrojiKvadrate(A, n) << endl;

    delete[] A;
   
    return 0;
}