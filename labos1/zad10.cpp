#include<iostream>
#include<cmath>
using namespace std;

double f (double z, int k){
    double rezultat = 1;
    if(k == 0) return z;
    rezultat *= -1 * pow(z, 2) / (2 * k * (2 * k + 1)) * f(z, k - 1);
    return rezultat;
}

int main(void){

    double z = 0.5;
    for (int i = 0; i < 6; i++)
        cout << f(z, i) << endl;

    return 0;

    return 0;
}