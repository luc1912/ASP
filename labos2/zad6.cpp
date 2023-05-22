#include<iostream>
#define MAX 10
using namespace std;

class Red{
    private:
        double queue[MAX];
        int ulaz = 0;
        int izlaz = 0;
    public:
        bool dodaj(double broj){
            if((ulaz + 1) % MAX == izlaz) return false;
            queue[ulaz] = broj;
            ulaz = (ulaz + 1) % MAX;

            return true;
        }
        bool skini(double *broj){
            if(ulaz == izlaz) return false;
            *broj = queue[izlaz];
            izlaz = (izlaz + 1) % MAX;
            return true;
        }

};

int main(void){
    int n;
    Red red;
    do{
        cout << "Upisite n > ";
        cin>>n;
    }while(n > 10);
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "Unesite "  << (i+1) << ". broj -> ";
        double broj;
        cin >> broj;
        red.dodaj(broj);
    }

    double element;
    while(red.skini(&element)){
        cout << element <<  " ";
    }



    return 0;
}