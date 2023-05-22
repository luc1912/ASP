#include<iostream>

using namespace std;

class Red{
    struct Cvor{
        double data;
        Cvor *next;
    };  

    Cvor *ulaz = nullptr;
    Cvor *izlaz = nullptr;

    public:
        //kao dodavanje na kraj liste
        bool dodaj(double broj){
            Cvor *newCvor = new (nothrow) Cvor;
            if(newCvor == nullptr) return false;

            newCvor->data = broj;
            newCvor->next = nullptr;

            //ako je newCvor prvi element
            if(ulaz == nullptr){
                izlaz = newCvor;
            }else{
                ulaz->next = newCvor;
            }
            ulaz = newCvor;
            return true;
        }
        //kao skidanje s početka liste
        bool skini(double *broj){
            if(izlaz == nullptr) return false;
            *broj = izlaz -> data;
            Cvor *tmp = izlaz;
            izlaz = izlaz -> next;
            delete tmp;

            //ako smo izbacili zadnji element
            if(ulaz == nullptr) izlaz = nullptr;

            return true;
        }
};

int main(void){
    int n;
    Red red;
    do{
        cout << "Upisite n > ";
        cin >> n;
    } while (n > 10);
    cout << endl;

    for (int i = 0; i < n; i++)    {
        cout << "Unesite " << (i + 1) << ". broj -> ";
        double broj;
        cin >> broj;
        red.dodaj(broj);
    }

    double element;
    while (red.skini(&element))    {
        cout << element << " ";
    }

    return 0;
    
}