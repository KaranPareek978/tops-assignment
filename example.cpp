#include <iostream>
using namespace std;



int check(int num1 ,int num2)
{
    
    if (num1 >num2)
    {
       return num1;
    }
    else 
    {
        return num2;
    }
    

}
    int main()
    {
        int A,B ,ans ;
        cout<<"Enter the two number";
        cin>> A >> B;
       ans = check(A ,B);
       cout<< ans <<"IS BIGGEST NUMBER::";
    }