#include<stdio.h>
int x,y,z;//global value
int addition()//parameter
{
    int m,n,answer;//local variable
    printf("Enter Number");
    scanf("%d %d", &m,&n);
    answer = m + n;
    printf("\nanswer = %d", answer);
    return answer;
}
int main()
{
    int sum;
    sum = addition();//argument
    printf("\nanswer = %d",sum);
    
    return 0;
}
