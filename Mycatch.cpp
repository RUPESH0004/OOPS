#include <iostream>
using namespace std;
class Account
{
    float bal;

public:
    Account()
    {
        bal = 0;
    }
    Account(float initBal)
    {
        bal = initBal;
    }
    void Deposit(float amt)
    {
        if ((int)amt % 500 != 0)
        {
            throw -1;
        }
        bal = bal + amt;
    }
    void Withdraw(float amt)
    {
        if (bal - amt < 0)
        {
            bal = bal - amt;
            cout << "insufisient balance";
        }
    }
    float ChackBalance()
    {
        return bal;
    }
};
int main()
{
    Account a;
    try
    {
        a.Deposit(900);
        a.Withdraw(2000);
    }
    catch (char const *m)
    {
        cout << endl
             << m;
    }
    catch (int e)
    {
        if (e == -1)
        {
            cout << "Amout must be in multiple of 500";
        }
    }
    return 0;
}