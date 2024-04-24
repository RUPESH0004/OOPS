#include<iostream>
using namespace std;
class circle 
{
  float rad;
  public :
  circle (float newred)
  {
    rad = newred;
  }
  //u have forced that rule that redious musst be provided before a circale is created 
  void serRadious(float r){
rad=r;
  }
  float Area (){return 3.14*rad *rad;}
  float Circumfreance (){return 3.14*2*rad;}
  //same name as the class 
  //called when the object is destroyed (unloaded from memory)
  //preceeded by a "~" sing = tilde
  //Destructous do not destroy the object they are just called then the object is being destroyed 
  ~circle ()
  {
    cout << "\ncircle destroyed";
  }
};
int main ()
{
circle c(14);
cout << "\n Area is "<<c.Area()<<"and perimeter is "<<c.Circumfreance();
}