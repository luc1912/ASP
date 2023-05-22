#include<iostream>
#include<cstring>
using namespace std;

void zamijeni(string *prvi, string *drugi){
    string tmp = *prvi;
    *prvi = *drugi;
    *drugi = tmp;
}

void BubbleSortPoboljsani(string A[], int n, int smjer){
    int i, j;
    bool flag = 1;
    for (i = 0; flag == 1; i++){
        flag = 0;
        for (j = 0; j < n - 1 - i; j++){
            if (smjer == 1){
                if (strcmp(A[j + 1].c_str(), A[j].c_str()) >= 0){
                    zamijeni(&A[j + 1], &A[j]);
                    flag = 1;
                }
            }
            else if (smjer == 0){
                if (strcmp(A[j + 1].c_str(), A[j].c_str()) < 0){
                    zamijeni(&A[j + 1], &A[j]);
                    flag = 1;
                }
            }
        }
    }
}

int main(){
    int n, smjer;
    cout << "Upisite n: ";
    cin >> n;
    cout << "Upisite smjer sortiranja (0 = uzlazno, 1 = silazno): ";
    cin >> smjer;
    string *A = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    BubbleSortPoboljsani(A, n, smjer);

    cout << "Sortirano -> " << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    delete[] A;
    return 0;
}