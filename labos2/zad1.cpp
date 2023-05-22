#include <iostream>

using namespace std;

template <typename T>
class Lista {
    struct cvor {
        T data;
        cvor *next;
    };

    cvor *head;
    cvor *tail;

   public:
    Lista() { head = tail = nullptr; }

    ~Lista() {
        delete tail;
        delete head;
    }

    bool upis(T element) {
        cvor *newCvor = new (nothrow) cvor;
        if (newCvor == nullptr) return false;
        newCvor->data = element;
        newCvor->next = nullptr;

        cvor **p;

        for (p = &head; *p && (*p)->data < element; p = &((*p)->next))
            ;
        // sad će *p pokazivati na sljedeći cvor (cvor prije kojeg treba ubaciti
        // novi)

        newCvor->next = *p;
        *p = newCvor;

        if (!tail || !newCvor->next) {
            tail = newCvor;
        }

        return true;
    }

    void ispis() {
        for (cvor *curr = head; curr != nullptr; curr = curr->next) {
            cout << curr->data << "->";
        }
    }
};

int main() {
    int n;
    Lista<double> l;

    cout << "Unesite n: ";
    cin >> n;

    cout << "Unesite n brojeva: " << endl;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        l.upis(x);
    }

    l.ispis();

    return 0;
}