#include <iostream>
using namespace std;
int main ()
{
    string str;
    cout << " please Enter some text in lower text "<<endl;
    getline(cin,str);
    int vowelcount =0;
   for(int c = 0;c<=str.length();c++)
   {
   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        vowelcount++;
    }
   }   cout << "Number of vowels in the text: " << vowelcount << endl;

    return 0;
}
