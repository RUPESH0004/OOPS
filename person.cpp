#include<iostream>
using namespace std;
class Person 
{
 string name ;
 int age ;
 public:
 Person ()
 {
 name ="";
 age=0;
 }
 void SetData(string n,int a)
 {
    name = n;
    age=0;
 }
 void SetData(string n,int a )
 {
    name=n;
    age=a;
 }
 string Print(){
    string t="";
    t="name"+name +"age"+to_string(age);
    return t;
 }
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
   Employee p;
   p.SetData("Amit",23,84748);
   cout<<"\n"<<p.print();

}