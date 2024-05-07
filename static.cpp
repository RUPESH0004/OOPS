#include<iostream>
using namespace std;
class Card{
    char suite;
    string val;

    char validsuite[4] = {'H', 'D', 'C', 'S'};
    string validval[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    int IsValidSuite(char c){
        int i;
        for(i = 0; i < 4; i++){
            if(c == validsuite[i]){
                return i;
            }
        }
        return -1;
    }
    int isValidValue(string v){
        int i;
        for(i = 0; i < 13; i++){
            if(v == validval[i]){
                return i;
            }
        }
        return -1;
    }
    public:
        Card(){
            suite = '\0';
            val = "";
        }
        void SetValue(char s, string v){
            if(IsValidSuite(s) == -1 || isValidValue(v) == -1){
                cout<<"\nInvalid Card";
                return;
            }
            suite = s;
            val = v;
        }
        string Print(){
            string s ="";
            s = val;
            s.push_back(suite);
            return s;
        }      
};
int main()
{
    Card c;
    c.SetValue('H', "2");
    cout<<"\nCard is "<<c.Print();
    return 0;
}