#include<iostream>
using namespace std;

class Table
{
public:
    int num1 , Total;
    void Get_num()
    {
        cout<< "enter the value to get the table:)";
        cin >> num1;
    }
    void multi_table()
    {
        for (int i = 1; i < 11; i++)
        {
            cout<<num1 << "*" << i <<"="<<num1*i<<"\n";
        }
    }
};

int main ()
{
    Table T;
    T.Get_num();
    T.multi_table();

    return 0;
}