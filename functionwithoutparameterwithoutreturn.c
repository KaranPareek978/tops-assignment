#include<stdio.h>
int x,y,z;
void addition()
{
    int m,n,answer;//local variable
    printf("Enter Number");
    scanf("%d %d", &m,&n);
    answer = m + n;
    printf("\nanswer = %d", answer);
}
int main()
{
    int k;
    printf("k=%d", k);
    addition();
    return 0;
}
