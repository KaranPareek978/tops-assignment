#include<stdio.h>
#include<conio.h>

int main ()
{
float area , l,b,radius;
int ch;
printf("1 area of circle \n 2 area of r1ectangle\n");
scanf("%d",&ch);
switch (ch)
{
   case 1:
      {
       printf("Enter the value of radius:)");
      scanf("%f",&radius);
      area = 3.14*radius*radius;
      printf("result :-> %f",area);
      break;
      }
   case 2:
      {
       printf("enter the value of length and breadth ");
      scanf("%f %f",&l,&b);
      area = l*b;
      printf("result :-> %f",area);
       break;
      }
   {
         default:
         break;
   }
   
}
return 0;
}