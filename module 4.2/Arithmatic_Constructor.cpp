#include <iostream>
using namespace std;

class Calculation
{
public:
    int a, b;
    Calculation()
    {
        cout << "Enter two number:";
        cin >> a >> b;
        int answer = a + b;
        cout << "Addition = " << answer;
    }
    Calculation(int r)
    {
        cout << "Area of circle = " << 3.14 * r * r;
    }
    Calculation(int a, int b)
    {
        if (b != 0)
        {
            cout << "Your answer =" << a / b;
        }
    }
    Calculation(int a, int b, int c)
    {
        cout << "Enter two number:";
        cin >> a >> b;
        int answer = a - b - c;
        cout << "Addition = " << answer;
    }
};
int main()
{
    int r, m, n;
    cout << "enter radius:";
    cin >> r;
    Calculation obj1(r);
    Calculation obj2(5, 2);
    Calculation obj3(4, 2);
    Calculation obj4(5, 3, 2);
    return 0;
}
