/*
    1st is Parent class/ super class / Base class

    2nd is Child class
*/
#include<iostream>
using namespace std;

class Cricketer
{
    public:
    string name;
    int run[5];

    void getdata()
    {
        cout <<"Enter Name of Batsman \n Enter The Runs For 5 matches";
        cin >> name;

        for (int i = 1; i < 6 ; i++)
        {
            cin>> run[i];
        }
    }


};

class Batsman : public Cricketer
{
    int total;
    float AVG;
    int best_performance;

       
};