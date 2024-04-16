#include<iostream>
using namespace std;
int main()
{
    char cstr [20]= "HII";
    string str = " hello world";
     //cstr  = "ok"; you vannot assign to an arry of needed 
     cout << "\nLetter at index O"<<str[0];
     cout<<"\n Letter at index 1"<<str[1];
     cout <<"\n Enter some texr ";
     getline(cin,str);
     cout<<"\n New text is "<<str;
     //apped to string 
     str =str + "another text ";
     cout<<"\nlength of the text is "<<str.length();
     //replace 5 latter from 3 position
     str.replace(3,5 ," there");
     cout<<"\n the text is "<<str;
    //insert hello at the index no 3
     str.insert(3,"Hello");
     cout <<  "the text no is "<<str<<endl;
     // as we know we can use the push pop function also like stack withoudt any fille 
}