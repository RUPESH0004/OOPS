
#include<iostream>
using namespace std;
class Shape{
    protected:
        int sides;
    public:
        Shape(){
            sides = 0;
        }
        void SetNoOfSides(int s){
            sides = s;
        }
        int GetNoOfSides(){
            return sides;
        }
        float virtual Area() = 0; //pure virtual function or abstract function
        float virtual Perimeter() = 0; //pure virtual function or abstract function
        //pure virtual function does not take memory
};
class Circle:public Shape{
    float radius;
    public:
        Circle(){
            radius = 0;
        }
        void SetRadius(float r){
            radius = r;
        }
        float Area(){
            return 3.14 * radius * radius;
        }
        float Perimeter(){
            return 2 * 3.14 * radius;
        }
};
class Rectangle:public Shape{
    float length, breadth;
    public:
        Rectangle(){
            length = breadth = 0;
            sides = 4;
        }
        void SetSides(float l, float b){
            length = l;
            breadth = b;
        }
        float Area(){
            return length * breadth;
        }
        float Perimeter(){
            return 2 * (length + breadth);
        }
};
int main()
{
    
    Circle c;
    Rectangle r;
    Shape *shapeArr[3];
    c.SetRadius(5);
    r.SetSides(6, 4);

    
    shapeArr[1] = &c;
    shapeArr[2] = &r;
    for(int i = 0; i < 3; i++){
        cout<<"\nArea is "<<shapeArr[i]->Area();
        cout<<"\nPerimeter is "<<shapeArr[i]->Perimeter();
    }

}