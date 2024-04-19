#include <iostream>
using namespace std;
class Circle
{
    float rad;
public:
    Circle()
    {
        rad = 0;
        cout << "\n circle created ";
    }
    void SetRadious(float r)
    {
        rad = r;
    }
    float Area()
    {
        return 3.14 * rad * rad;
    }
    float Circumfrence()
    {
        return 3.14 * 2 * rad;
    }
};
int main()
{
    Circle c;
    Circle d[10];
    c.SetRadious(6);
    int i;
    cout << "\nArea is " << c.Area() << "\nCircumfrence is " << c.Circumfrence();
    for (size_t i = 0; i < 10; i++)
    {
        cout << "\nArea is " << d[i].Area() << "\nCircumfrence is " << d[i].Circumfrence();
    }
}