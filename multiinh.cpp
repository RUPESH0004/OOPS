#include <iostream>
using namespace std;
class person 
{
    string name;
    int age;

};
class Employee:public Person{
    float salary;
    public:
    Employee ()
    {
        salary=0;
    }
    void SetData(string n,int a,float s){
        Person::SetData(n,a);
        salary=s;
    }
    string print(){
        string t="";
        t=Person::Print()+"salary"+to_string(salary);
        return t;
    }
};
int main ()
{
person p;
person *q; 
q=new person ();
q->setData ("nidhi",45);
cout <<"\n"<<q->print();
delete q;
q = NULL;
}