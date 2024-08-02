#include <iostream>
using namespace std;
class product
{
 float price;
 float tax ;
 string name;
  public:
  void getPrice (string name , float price)
  { 
    cout << "the given name of product is :"<<name<<endl;
    cout <<"the price without tax is:"<<price<< endl;

  }
  float finalPrice()
  {
    float finalprice;
   finalprice=(price)+(price*0.15);
   tax = finalprice + price;
    return tax ;
    
  }

};
int main ()
{
 product p;
 p.getPrice("pen",45);
 p.finalPrice();
 cout << "the final price is "<<p.finalPrice();
 // this is adding the new repo using new command line 

}