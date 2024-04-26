#include <iostream>
using namespace std;
class Account{

    float currentBalance;
    public :
    //constructor overloading 
    Account (float intbal)
    {
        intbal=1000;
    }
        Account ()
        {
            currentBalance=0;
        
        }
        float checkBalance()
        {
            return currentBalance;
        }
        float deposit(float depositamount)
        {
            currentBalance=depositamount+currentBalance;
            return currentBalance;
        }
        float deposit(float depositamount,float intper)
        {
            float finalbalnce;
            return
           finalbalnce= depositamount+depositamount*intper;
        }
        float withdraw(float withdrawamount)
        {
            currentBalance=currentBalance - withdrawamount;
            return currentBalance;
        }

};
int main ()
{
    float depositamount;
    float withdrawamount;
    int no;
    Account A;
    cout <<"please select you want to deposit or withdraw for withdraw select 1 or deposit select 2"<<endl;
    cin>>no;
    if(no!=1)
    
    {cout<<"please Enter the amount for deposit"<<endl;
    cin>>depositamount;}
    else
    {cout<<"please Enter the amount for widrawal"<<endl;
    cin>>withdrawamount;}
    A.withdraw(withdrawamount);
    A.deposit(depositamount);
    A.deposit(depositamount,7);
    cout<<"the current balance is :"<<A.checkBalance();
    
    
    
   
 
}