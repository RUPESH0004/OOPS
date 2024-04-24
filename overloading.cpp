#include <iostream>
#include <limits>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
        // prevent junk values
    }
    void SetData()
    {
        cout << "\nEnter name ";
        getline(cin, name);
        cout << "\nEnter Age";
        cin >> age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    void SetData(string n, int a)
    {
        name = n;
        age = a;
    }
    void SetData(string n)
    {
        name = n;
        cout << "\n Enter age ";
        cin >> age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    void SetData(int a)
    {
        age = a;
        cout << "\nEnter name";
        getline(cin, name);
    }
    void SetData(int a, string n)
    {
        SetData(n, a);
    }
    string PrintData()
    {
        string t = "";
        t = name + " " + to_string(age);
        return t;
    }
};
int main()
{
    Person p;
    p.SetData();
    cout << "\n"
         << p.PrintData();
    p.SetData("rupesh", 45);
    p.SetData(45);
    cout << "\n"
         << p.PrintData();
    p.SetData("Babu");
    cout << "\n"
         << p.PrintData();
    p.SetData(45, "hello");
    cout << "\n"
         << p.PrintData();

    return 0;
}