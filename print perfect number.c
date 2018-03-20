#include <stdio.h>
#include <conio.h>

void main()
{
long int range,sum=1;
printf ("enter the upper limit  ");
scanf ("%ld",&range);
for (long int num=6; num<=range; num++)
{
     for (long int i=2;i <=num/2;i++)
   {
   	if (num%i==0)
      	sum+=i;
     }
     if (sum==num)
          printf ("%ld\n",sum);  
     sum=1;
          
 }        
 printf ("---------end---------");
}