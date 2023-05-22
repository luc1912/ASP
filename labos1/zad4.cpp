#include <iostream>
using namespace std;

double exp(double x, int n, int *fakt, double *xpot){
    if (n == 1){
        return 1;
    }
    else{

        int *newFakt = new int;
        double *newX = new double;
        *newFakt = *fakt / (n - 1);
        *newX = *xpot / x;
        return *xpot / (*fakt) + exp(x, n - 1, newFakt, newX);
    }
}

int main(void){
    int n;
    cin >> n;
    double x;
    cin >> x;
    double *A = new double[n];
    int fakt = 1;
    double xpot = 1;
    for (int i = 1; i <= n; i++){
        A[i] = exp(x, i, &fakt, &xpot);
        xpot *= x;
        fakt *= i;
        cout << A[i] << endl;
    }
    return 0;
}