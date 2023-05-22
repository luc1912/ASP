#include <cstring>
#include <iostream>
using namespace std;

class Vozilo {
   private:
    string model;
    int godina;

    friend bool operator<(Vozilo const &a, Vozilo const &b);

   public:
    Vozilo(){};
    Vozilo(string model, int godina) : model(model), godina(godina){};

    void setModel(string model) { this->model = model; }
    string getModel() { return model; }

    void setGodina(int godina) { this->godina = godina; }
    int getGodina() { return godina; }

    ~Vozilo(){};
};

bool operator<(Vozilo const &a, Vozilo const &b) {
    bool var;
    var = (a.model != b.model) ? (a.model < b.model) : a.godina > b.godina;
}

void zamijeni(Vozilo &prvi, Vozilo &drugi) {
    Vozilo tmp = prvi;
    prvi = drugi;
    drugi = tmp;
}

template <typename T>
void SelectionSort(T A[], int n) {
    int i, j, min;  // indeksi polja

    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (A[j].getGodina() < A[min].getGodina()) {
                min = j;
            }
            zamijeni(A[i], A[min]);
        }
    }
}

int main(void) {
    int n;
    cout << "Upisite n -> ";
    cin >> n;
    cout << endl;

    Vozilo *A = new Vozilo[n];
    string model;
    int godina;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". vozilo" << endl;
        cout << "Upisite model -> ";
        cin >> model;
        cout << endl;
        cout << "Upisite godinu -> ";
        cin >> godina;
        A[i].setGodina(godina);
        A[i].setModel(model);
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i].getModel() << ", " << A[i].getGodina() << endl;
    }
    cout << endl;

    SelectionSort(A, n);

    cout << "Sortirano " << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i].getModel() << ", " << A[i].getGodina() << endl;
    }

    delete[] A;
    return 0;
}