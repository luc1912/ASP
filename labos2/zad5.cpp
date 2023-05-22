#include<iostream>
#include<time.h>
#define MAX 10
using namespace std;

template <typename T>
class Stog{
private:
    T stog[MAX];
    int vrh = -1;

public:
    Stog() {}

    bool push(T el)    {
        if (vrh >= (MAX - 1))
            return false;
        stog[++vrh] = el;
        return true;
    }

    bool pop(T &el){
        if(vrh  < 0) return false;
        else
            el = stog[vrh--];
            return true;
    }

};

int main(void){

    srand(unsigned(time(NULL)));
    Stog<int> s, pomocni;
    int item;

    for(int i = 0; i < 11; i++){
        s.push(rand() %10 + 1); //random broj iz intervala [1, 10]
    }

    while(s.pop(item)){
        pomocni.push(item);
    }

    while(pomocni.pop(item)){
        cout << item << " ";
    }
    return 0;
}