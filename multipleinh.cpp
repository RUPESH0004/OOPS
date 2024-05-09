#include<iostream>
using namespace std;
class pencile
{
string manu;
float price;
public :
pencile()
{
    manu="";
    price =0;
}
void setData (string manu,float price )
{
    this ->manu = manu;
    this ->price = price;

}
string print ()
{
    string t;
    t = manu + "pencil priice at" + to_string (price);
    return t;
}
string write ()
{
    return "A pencil writes";
}
};
class Eraser 
{
string manu;
float price;
public: 
Eraser ()
{
    manu= "";
    price = 0;
}
void setData (string manu,float price )
{
    this ->manu = manu;
    this ->price = price;

}
string print ()
{
    string t;
    t = manu + "Eraser priice at" + to_string (price);
    return t;
}
string Erase()
{
    return "An eraser erases anything writhen by the pencil";
}

};
class pencilwitheraser:public pencile , public Eraser 
{
  void setData (string manu,float price)
  {
    pencile::setData(manu,price/2);
    Eraser::setData(manu,price/2);
  }
  void setData (string pmanu,float pprice, string emanu , float eprice)
  {
    pencile::setData(pmanu,pprice);
    Eraser::setData(emanu,eprice);
  }
  string Print ()
  {
    return pencile::print ()+ "and"+Eraser::print();
  }
};

int main ()
{
  
}