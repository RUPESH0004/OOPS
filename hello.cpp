#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //learning the differace between c and c ++
    cout << "hello world"<<endl;
    int a = 5;
    char str[20] = "hii there ";
    float x = 567.87;
    printf("\n%d",a);
    printf("\n%s",str);
    printf("\n%f",x);
    cout<< "the int is "<<a<<endl<<"and string is "<< str<< endl << "and float is "<< x<<endl;
    int n ;
    int b;
    float c;
    cout<< "please enter the decimal no "<< endl;
    cin>>c;
    cout << "please enter two digits or ints "<<endl;
    cin>> n>>b;
    cout<<"the first no is"<<n << endl << "the second no is  "<< b<< endl << "the decimal no is "<< c;
    //there is some issue in c and c++ both of the language the when ever you want to ask long text its unable to give so 
    //so for that we are using cin.getling(string name,string size)
    char btr[20];
    cin.getline(btr,20);
    cout<<"the entre text is "<<btr;
}