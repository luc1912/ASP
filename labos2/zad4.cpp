#include <iostream>
#include <time.h>
#define MAX 100
using namespace std;

template <typename T>
class Stog{
    struct Atom{
        T data;
        Atom *next;
    };
    Atom *head;

    public:
        Stog() {head == nullptr;}

        bool push(T el){
            Atom *newAtom = new(nothrow) Atom;
            if(!newAtom) return false;

            newAtom->data = el;
            newAtom->next = head;
            head = newAtom;

            return true;            
        }

        void print(){
            cout << "VRH -> ";
            for (Atom *i = head; i != nullptr; i = i->next)
                cout << i->data << " -> ";
            cout << "DNO" << endl;
        }
        
};

int main(void){
    Stog<int> s;
    srand(unsigned(time(0)));

    for (int i = 0; i < 101; i++)    {
        int x = rand();
        s.push(x);
    }

    s.print();

    return 0;
}