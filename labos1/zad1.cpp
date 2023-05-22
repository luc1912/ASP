#include<iostream>
using namespace std;

void ispis(float polje[], int n){
    //rekurzivno ispisuje negativne članove polja od prvog prema zadnjem
    if(n > 0){
        ispis(polje, n - 1);
        if (polje[n - 1] < 0)
{
            cout << polje[n - 1] << " ";
        }
    }
   
}

int main(void){
    
    int n;
    cout << "Unesite n > ";
    cin >> n;
    cout << endl;

    float *A = new float[n];
    for(int i = 0; i < n; i++){
        cout << "Unesite " << i+1 << ".element polja > ";
        cin >> A[i];
    }
    cout << endl;

    ispis(A, n);

    delete[] A;

    return 0;
}