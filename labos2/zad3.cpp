#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

template<typename T>
class Stog{
    private:
        T stog[MAX];
        int vrh = -1;
    public:
        Stog(){}

        bool push(T el){
            if (vrh >= (MAX - 1))
                return false;
            stog[++vrh] = el;
            return true;
        }

        void print()        {
            cout << "VRH -> ";
            for (int i = vrh; i > -1; i--)            {
                cout << stog[i] << " -> ";
            }
            cout << "DNO" << endl;
        }
};

int main(void){
    Stog<int> s;
    srand(unsigned(time(0)));

    for(int i = 0; i < 101; i++){
        int x = rand();
        s.push(x);
    }

    s.print();

    return 0;
}