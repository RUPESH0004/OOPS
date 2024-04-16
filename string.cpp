#include<iostream>
using namespace std;
int main ()
{
    string str;
    cout<<"\n Enter some text:";
    getline(cin,str);
    cout<<"\n length of the text is  "<< str.length();
    cout << " \nMemory Resreved is"<<str.capacity();
    str.shrink_to_fit();
    cout<<"\now Memory rserved is "<<str.capacity();
}