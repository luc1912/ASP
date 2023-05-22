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
    // kao dodavanje na kraj liste
    bool dodaj(double broj){
        Cvor *newCvor = new (nothrow) Cvor;
        if (newCvor == nullptr)
            return false;

        newCvor->data = broj;
        newCvor->next = nullptr;

        // ako je newCvor prvi element
        if (ulaz == nullptr){
            izlaz = newCvor;
        }
        else{
            ulaz->next = newCvor;
        }
        ulaz = newCvor;
        return true;
    }

    bool poljeURed(int polje[], int n){
        
    }
};