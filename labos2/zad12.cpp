#include<iostream>
#include<cstring>
using namespace std;

class Osoba{
    private:
        string ime;
        unsigned short int dob;
    public:
        void setIme(string ime){
            this->ime = ime;
        }

        string getIme(){
            return ime;
        }
        void setDob(int dob){
            this->dob = dob;
        }

        int getDob(){
            return dob;
        }

        friend bool operator<(const Osoba &first,
                              const Osoba &second){
            if (first.dob < second.dob) return true;
            else if (first.dob == second.dob){
                if (strcmp(first.ime.c_str(), second.ime.c_str()) < 0) return true;
                else return false;
            }
            return false;
        }
};

template<typename T>
void InsertionSort(T A[], int n){
        int i, j;
        T temp;
        for (i = 1; i < n; i++){
            temp = A[i];
            for (j = i; j > 0 && temp < A[j - 1]; j--)
                A[j] = A[j - 1];

            A[j] = temp;
        }
}

int main(void){

    int n;
    cout << "Upisite n -> ";
    cin >> n;
    cout << endl;

    Osoba *A = new Osoba[n];
    string ime;
    int dob;
    for (int i = 0; i < n; i++){
        cout << i + 1 << ". osoba" << endl;
        cout << "Upisite ime: ";
        cin >> ime;
        cout << "Upisite dob: ";
        cin >> dob;
        A[i].setIme(ime);
        A[i].setDob(dob);
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].getDob() << " ";
    }
    cout << endl;

    InsertionSort(A, n);

    cout << "Sortirano " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].getDob() << " ";
    }

    delete[] A;

    return 0;
}