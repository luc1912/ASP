#include<iostream>
using namespace std;

struct Zapis{
    int sifra;
    string naziv;
};

void obicanBubbleSort(Zapis A[], int n, char smjer){
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++){
            if (smjer == '0'){
                if (A[j + 1].sifra < A[j].sifra)
                    swap(A[j + 1], A[j]);
            }
            else if (smjer == '1'){
                if (A[j + 1].sifra > A[j].sifra)
                    swap(A[j + 1], A[j]);
            }
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

    for (int i = 0; i < n; i++)
    {
        cout << "Zapis " << i + 1 << endl;
        cout << "Upisite naziv -> ";
        cin >> A[i].naziv;
        cout << "Upisite sifru -> ";
        cin >> A[i].sifra;
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i].sifra << " ";
    }
    cout << endl;

    obicanBubbleSort(A, n, smjer);

    cout << "Sortirano " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].sifra << " ";
    }

    delete[] A;
    return 0;
}