#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout << "please enter the no for table"<<endl;
    cin>>a;
    for (int i = 1; i <= 10; i++)
    {
        int ans = a*i;
        cout<<ans<<endl;
    }
    
}