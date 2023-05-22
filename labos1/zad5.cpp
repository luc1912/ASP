#include<iostream>
using namespace std;

template <typename T>
int binarnoTrazi(T polje[], int n, T x){
    int low = 0;
    int high = n-1;
    int mid;
    if(low > high) return -1;

    while(low <= high){
        mid = (low + high) / 2;
        if(x == polje[mid]) return mid;
        else if(x > polje[mid]) low = mid + 1;
        else if(x < polje[mid]) high = mid - 1;
    }

    return -1;
}

int main(void){
    int n;
    double x; // realan broj
    cout << "Unesite velicinu polja > ";
    cin >> n;
    cout << endl;
    cout << "Unesite x > ";
    cin >> x;
    cout << endl;

    float *A = new float[n];
    cout << "[";
    for (int i = 0; i < n; i++){
        A[i] = i * 1.1;
        if (i == 0)
            cout << A[i];
        else
            cout << ", " << A[i];
    }
    cout << "]" << endl;

    int rezA = binarnoTrazi<float>(A, n, x);
    if (rezA == -1)
        cout << "Broj se ne nalazi u polju." << endl;
    else
        cout << "Broj x se nalazi na indeksu " << rezA << endl;

    int *A1 = new int[n];
    cout << "[";
    for (int i = 0; i < n; i++){
        A1[i] = (i + 3);
        if (i == 0)
            cout << A1[i];
        else
            cout << ", " << A1[i];
    }
    cout << "]" << endl;

    int rezA1 = binarnoTrazi<int>(A1, n, x);
    if (rezA1 == -1)
        cout << "Broj se ne nalazi u polju." << endl;
    else
        cout << "Broj x se nalazi na indeksu " << rezA1 << endl;

    return 0;
}