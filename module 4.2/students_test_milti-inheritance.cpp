#include <iostream>
using namespace std;

class Students
{
    int rollNum;

public:
    void setDataA(int x)
    {
        rollNum = x;
    }
    void getDataA()
    {
        cout << "Roll number: " << rollNum << endl;
    }
};

class Test : public Students
{
    int eng, maths;

public:
    void setDataB(int y, int z)
    {
        eng = y;
        maths = z;
    }

    void getDataB()
    {
        cout << "English: " << eng << endl;

        cout << "Maths: " << maths << endl;
    }
};

class Result : public Test
{
    int totalMarks;

public:
    void setDataC(int z)
    {
        totalMarks = z;
    }

    void getDataC()
    {
        cout << "Total marks: " << totalMarks << endl;
    }
};
int main()
{
    Result Niral;
    Niral.setDataA(9);
    Niral.getDataA();
    Niral.setDataB(60, 70);
    Niral.getDataB();
    Niral.setDataC(130);
    Niral.getDataC();
}