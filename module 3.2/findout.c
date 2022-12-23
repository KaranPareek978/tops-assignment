#include<stdio.h>
 
int main()
{
 int Size, i, a[10] ;
 int Even_Count = 0, Odd_Count = 0 , Even_sum = 0,Odd_sum = 0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
   scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
    Even_sum +=a[i]
     Even_Count++;
     
   }
   else
   {
    Odd_sum +=a[i]
     Odd_Count++;
       }
 }
  
 printf("\n Total Number of Even Numbers in this Array = %d ", Even_Count);
 printf("\n Total Number of Odd Numbers in this Array = %d ", Odd_Count);
 printf("\n Total sum of even number is = %d" , Even_sum);
 printf("\n Total sum of odd number is = %d" , Odd_sum);
 return 0;
}