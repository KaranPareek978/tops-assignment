#include <iostream>
using namespace std;

class Person
{

public:
    string name;
    int age;

    void nameFunc()
    {
        cout << "Enter name: " << endl;
        cin >> name;
    }
    void ageFunc()
    {
        cout << "Enter age: " << endl;
        cin >> age;
    }
};

class Student
{
public:
    float percent;

    void percentFunc()
    {
        cout << "Enter percentage: " << endl;
        cin >> percent;
    }
};

class Teacher : public Student, public Person
{
public:
    float salary;

    void salaryFunc()
    {
        cout << "Enter salary: " << endl;
        cin >> salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
/*
public:
float salary;
void salaryFunc()
{
    cout << "Enter salary: " << endl;
    cin >> salary;
}
};
*/
int main()
{
    Teacher abc;
    abc.nameFunc();
    abc.ageFunc();
    // abc.percentFunc();
    abc.salaryFunc();
    abc.display();
}