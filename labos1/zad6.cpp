#include<iostream>
using namespace std;

char *ostaviSlova (string ulaz){
    int size = ulaz.size();
    char *rj = new char[size];
    int pom = 0;

    for(int i = 0; i < size; i++){
        if ((ulaz[i] >= 'A' && ulaz[i] <= 'Z') || (ulaz[i] >= 'a' && ulaz[i] <= 'z')){
            rj[pom] = ulaz[i];
            pom++;
        }
    }
    return rj;
}

int main(void){
    string ulaz = "asp12_i_ASP13";
    char *niz = ostaviSlova(ulaz);
    cout << niz << endl;

    return 0;
}