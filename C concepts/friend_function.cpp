#include<iostream>
using namespace std;
class number1;
class number2;
class  Number
{
    public:
    int a;
    Number(int x )
    {
        a = x;

    }
    void showdata()
    {
        cout<< "a="<<a;
    }
    friend void addition(Number A , Number B ,Number C)
};
class  Number1
{
    public:
    int b;
    Number1(int y )
    {
        b = y;

    }
    void showdata()
    {
        cout<< "b="<<b;
    }
    friend void addition(Number A , Number B ,Number C)
};
class  Number2
{
    public:
    int c;
    Number2(int z )
    {
        c = z;

    }
    void showdata()
    {
        cout<< "c="<<c;
    }
    friend void addition(Number A , Number B ,Number C)
};
void addition(Number A , Number1 B ,Number2 C)
{
    int answer = A.a+B.b+C.c;
    cout<< "addition ="<<answer;
}
int main()
{
    Number oNUm(10);
    oNUm.showdata();
    Number1 num(5);
    num.showdata();
    Number2 num2(25);
    num2.showdata();

    return 0;
}