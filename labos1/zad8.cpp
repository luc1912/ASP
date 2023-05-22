//probaj još jednom napisat 
#include<iostream>
using namespace std;

class SanitizedString{
    private:
        string str;
    public:
        SanitizedString(string str) {this->str = str;}
        //moramo imat i defaultni konstruktor, inače ne možemo stvorit objekt ove klase bez da ga inicijaliziramo
        SanitizedString() {this->str = "";}

        // void setStr(string str){
        //     this->str = str;
        // }

        // string getStr(){
        //     return str;
        // }

        friend ostream &operator<<(ostream &out, const SanitizedString &string)
        {
            out << string.str;
            return out;
        }

        void removeDuplicateWhitespace(){
            int cnt = 0;
            int size = str.size();
            for(int i = 0; i < size - 1; i++){
                if(str[i]== ' ' && str[i+1] == ' '){
                    cnt++;
                    for(int j = i; j < size-1; j++){
                        str[j] = str[j+1];
                    }
                    i--;
                }

            }
            str.resize(size-cnt);

        }

        void removeNonAlphaChars(){
            int cnt = 0;
            int size = str.size();
            for(int i = 0; i < size; i++){
                if(!(isalpha(str[i])) && str[i] != '\0' && str[i] != ' '){
                    cnt++;
                    for(int j = i; j < size - 1; j++){
                        str[j] = str[j+1];
                    }
                    i--;
                }
            }
            str.resize(size - cnt);
        }

};

int main(void){
    string str;
    cout << "Unesite string > ";
    getline(cin, str);
    cout << endl;
    cout << str << endl;

    SanitizedString novistring = SanitizedString(str);

    novistring.removeDuplicateWhitespace();
    novistring.removeNonAlphaChars();
    cout << novistring << endl;

    return 0;
}