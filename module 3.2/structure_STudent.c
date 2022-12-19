#include<stdio.h>
#include<string.h>
struct  student
{
    char name[100];
    int age;
    int marks;
    float percentage;

};

int main()
{
    struct student s[5];
    printf("Enter The student Detail:");
    scanf("%s",&s[0].name);
    scanf("%d",&s.age);
    scanf("%d",&s.marks);
    scanf("%f",&s.percentage);
    printf("%s %d %d %f", s.name ,s.age ,s.marks ,s.percentage);
    
}