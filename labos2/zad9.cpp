#include<iostream>
using namespace std;

struct Zapis{
    int postanskibroj;
    string mjesto;
};

void insertionSort(Zapis A[], int n, char smjer){
    int i, j;
    Zapis temp;
    for(i = 1; i < n; i++){
        temp = A[i];
        if(smjer == '0'){
            //uzlazno sortiramo
            for(j = i; j >=1 && A[j-1].postanskibroj > temp.postanskibroj; j--){
                A[j] = A[j-1];
            }
        }else if(smjer == '1'){
            //silazno sortiramo
            for(j = i; j>= 1 && A[j-1].postanskibroj < temp.postanskibroj; j--){
                A[j] = A[j-1];
            }
        }
        A[j] = temp;
    }    
}


int main(void){
    int n;
    cout << "Upisite n  -> ";
    cin >> n;
    cout << endl;

    char smjer;
    cout << "Upisite smjer (0 = uzlazno, 1 = silazno) -> ";
    cin >> smjer;
    cout << endl;

    Zapis *A = new Zapis[n];

    for(int i = 0; i < n; i++){
        cout << "Zapis " << i+1 << endl;
        cout << "Upisite mjesto -> ";
        cin >> A[i].mjesto;
        cout << "Upisite postanski broj -> ";
        cin >> A[i].postanskibroj;
    }

    for (int i = 0; i < n; i++){
        cout << A[i].postanskibroj << " ";
    }
    cout << endl;

    insertionSort(A, n, smjer);

    cout << "Sortirano " << endl;
    for(int i = 0; i < n; i++){
        cout << A[i].postanskibroj << " ";
    }



    delete[] A;
    return 0;
}