#include<stdio.h>
#include<math.h>

int main ()
{
float area , l,b,radius, a,d,c,s;
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
      case 3:
      {
         printf("Enter the value of side");
         scanf("%f %f %f", &a,&d,&c);
         s = a+b+c;
         s = (a+d+c)/2;
         area = sqrt(s*(s-a)*(s-d)*(s-c));
         printf("result = %f",area);
         break;
      }
   {
         default:
         break;
   }
   
}
return 0;
}