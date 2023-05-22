#include<iostream>
using namespace std;

int *randomKvadrati(int *polje, int n){
    int *noviNiz = new int[n];
    for(int i = 0; i < n; i++){
        noviNiz[i] = polje[i] * polje[i];
    }
    int *finalNiz = new int[n];
    int idx;
    int pom = 0;
    int brojac[n] = {0};
    do{
        idx = rand()%n;
        if(brojac[idx] == 0){
            brojac[idx]++;
            finalNiz[pom] = noviNiz[idx];
            pom++;
        }

    }while(pom < n);

    return finalNiz;
}


int main(void){
    int n;
    cout << "Unesite n > ";
    cin >> n;
    cout << endl;

    int *polje = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Unesite " << (i+1) << ". element  > ";
        cin >> polje[i];
    }
    cout << endl;

    int *rezultat = randomKvadrati(polje, n);
    for(int i = 0; i < n; i++){
        cout << rezultat[i] << " ";
    }

    return 0;
}