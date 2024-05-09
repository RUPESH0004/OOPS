#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    person()
    {
        name = "";
        age = 0;
    }
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }
    string print()
    {
        return name + " " + to_string(age);
    }
};
class Employee : public person
{
};
class student : public person
{
    string course;

public:
    student()
    {
        course = "";
    }
    void serData(string n, int a, string c)
    {
        person::setData(n, a);
        course = c;
    }
    string print()
    {
        return person ::print() + " " + course;
    }
};
class intern : public Employee, public student
{
    
};

int main()
{
}