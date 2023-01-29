#include<iostream>
using namespace std;

template <class s>
class calculation
{
    public:
    s a,b;
    calculation(s x,s y)
    {
        a = x;
        b =y;
    }
    void additon()
    {
        s answer = a + b;
        cout << "Addition ="<< answer;
        
    }
};
int main()
{
    calculation<float> obj1(10.9,20.8);
    calculation><int> obj2(30,50);
    obj1.additon;
    obj2.additon;
    
    return 0;
}