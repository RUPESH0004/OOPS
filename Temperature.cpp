// Creating the class name temperature
// where we converting the temperature in to celcius to ferhnite and ferhnite to celcius
// having the oveerloading funvtion name settemp
// settemp(float)
// sertemp(float,char)
#include <iostream>
using namespace std;
class Temperature
{
    float ftmp, ctmp;

    public:
    void SetTemp(float t)
    {
        ftmp = (t * 1.8) + 32;
        ctmp = t;
    }
    void SetTemp(float t,char s)
    {
        if(s=='f' || s=='F')
       { ctmp = (t - 32) * 1.8;
        ftmp = t;}
        else if (s=='c' || s=='C')
        {
        ftmp = (t * 1.8) + 32;
        ctmp = t;
        }
        else 
        {
            cout << "Invalide paramerter"<<endl;
        }
    }
    string  print ()
    {
        string s;
        return s="the temp in farhint is "+ to_string (ftmp)+"temp in celcius is "+ to_string (ctmp); 
    }
};
int main()
{
    Temperature p;
    Temperature s;
    p . SetTemp(100);
    cout<<p.print()<<endl;;
    p.SetTemp(45 ,'f');
    cout<<p.print()<<endl;

}