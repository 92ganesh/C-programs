#include <stdio.h>
#include <conio.h>

void main()
{
   int num,fact,sum=1;
   printf ("enter the number to know if its perfect number or not\n");
   scanf ("%d",&num);
   for (int i=2;i <=num/2;i++)
   {
   	if (num%i==0)
      	sum+=i;
     }
     if (sum==num)
          printf ("its a perfect number");  
     else 
          printf ("its not a perfect number");
   
   
}