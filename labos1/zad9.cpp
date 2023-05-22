#include<iostream>
#include<math.h>
using namespace std;

void f(int polje[], int n, int m){
    polje[0] = 1;
    if(n > 1){
        f(polje, n - 1, m);
        polje[n - 1] = m * polje[n - 2];
    }
    //polje[n-1] = (int)(pow(m, n-1) + 0.5); //pošto pow vraća double ovo osigurava da bude int
}

int main(void){
    int n;
    cout << "Unesite n > "; //broj članova polja
    cin >> n;
    cout << endl;

    int m;
    cout << "Unesite m > "; //broj
    cin >> m;
    cout << endl;
    
    int *polje = new int [n];

    f(polje, n, m);

    for(int i = 0; i < n; i++){
        cout << polje[i] << " ";
    }


    return 0;
}