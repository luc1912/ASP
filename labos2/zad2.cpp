#include<iostream>

using namespace std;

template<typename T>
class Lista{
    struct cvor{
        T data;
        cvor *next;
        cvor *prev;
    };
    
    cvor *head;
    cvor *tail;


    public:

        Lista(){head = tail = nullptr;}

        bool upis(T element){
            cvor *newCvor = new(nothrow) cvor;
            if(!newCvor) return false;

            newCvor->data = element;
            newCvor->next = nullptr;

            if (!head){            
                head = tail = newCvor;
            }
        
            tail->next = newCvor;
            newCvor->prev = tail;
            tail = newCvor;
            return true;
        }

        void ispis(){
            for(cvor *curr = head; curr; curr = curr->next){
                cout << curr->data << "->";
            }
        }


};

int main(){
    Lista<string> lista;
    int n;

    cout << "Upisite n: ";
    cin >> n;

    for (int i = 0; i < n; i++)    {
        string str;
        cin >> str;
        lista.upis(str);
    }

    lista.ispis();

    return 0;
}