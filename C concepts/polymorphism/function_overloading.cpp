#include<iostream>
using namespace std;

class  calculation
{
    public:

    int a,b , answer;
    int r;
    float area_;

    void area()
    {
        cout << "Enter The Radius";
        cin >>r;
        area_= 3.14*r*r;
        cout <<"Area of the Circle is :\n"<<area_;

    }
    void area(int size)
    {
        area_= size * size;
        cout<< "Area of Square\n"<<area_;

    }
    void area(int l , int b)
    {

        area_ = l*b;
        cout << "Area of Rectangle = \n"<<area_;
    }
};

int main()
{
    calculation c;
    c.area(25,20);
    c.area();
    c.area(30);
    return 0;
}
/*
    function overloading means one function with different parameter but having same name.
*/