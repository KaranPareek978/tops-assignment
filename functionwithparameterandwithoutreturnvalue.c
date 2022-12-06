#include<stdio.h>
int x,y,z;
void addition(int a,int b)
{
    int answer;
    answer = a + b;
    printf("\nanswer = %d", answer);
}
int main()
{
    addition(50,50);
    addition(35,35);
    return 0;
}
