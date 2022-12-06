#include <stdio.h>
int main()
{
  float x, y, z;
    //Addition
  printf("Enter two numbers to add\n");
  scanf("%f %f", &x, &y);

  z = x + y;

  printf("Sum of the numbers = %f\n", z);

  printf("Enter two number to sub\n");
  scanf("%f %f", &x, &y);
    //Substraction
  z = x-y;
  printf("Substract of Two number = %f\n",z);

    //Multiplication

  printf("Enter two number to mul\n");
  scanf("%f %f", &x, &y);

  z = x*y;
  printf("Multiplication of Two number = %f\n",z);

    //Modulo
    int a,b,c;
    printf("Enter the dividend: ");
    scanf("%d", &a);
    printf("Enter the divisor: ");
    scanf("%d", &b);
    
    // Modulus of Two Numbers
   c = a % b;
    
    // Display Remainder
    printf("The modulus of %d and %d is: %d", a,b,c);
  return 0;
}