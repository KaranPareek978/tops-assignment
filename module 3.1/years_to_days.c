#include<stdio.h>
int main()
{
    float year ,days;
    printf("Enter the year you want to convert");
    scanf("%f",&year);
    days = year*365;
    printf("result = %f",days);
    printf("\nEnter the days ypu want to convert");
    scanf("%f",&days);
    year = days/365;
    printf("result = %f",year);
    return 0;
}