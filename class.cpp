#include <iostream>
using namespace std;
struct Employee
{
    string name;
    float salary;
    int age;
};
void GetEmployeeData(struct Employee *e)
{
    cout<<"\n Enter a name ";
    getline(cin, e->name);
    cout <<"\nEnter age and salary ";
    cin>>e->age>> e->salary;
}
void PrintEmployeeData(struct Employee *e)
{
    cout << " \n Name is "<<e -> name << "\n Age:"<<e->age<<"\nsalary:"<<e->salary;
}

int main()
{
struct Employee e;
GetEmployeeData(&e);
PrintEmployeeData(&e);

}