#include<iostream>
#include<cmath>
using namespace std;

double pi (int n){
    double rezultat = 0;
    if(n > 0)
        rezultat += (4*(pow(-1, n - 1) * 1 / (2 * n - 1)) + pi(n - 1));
    return rezultat;
}

int main(void){
    int n;
    cout << "Unesite broj elemenata polja: ";
    cin >> n;
    double *A = new double[n];

    cout << "[";
    for (int i = 0; i < n; i++){
        A[i] = pi(i + 1);
        if (i == 0)
            cout << A[i];
        else
            cout << ", " << A[i];
    }
    cout << "]" << endl;
    return 0;
}
  