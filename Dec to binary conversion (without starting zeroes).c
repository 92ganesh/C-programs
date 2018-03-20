#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{ 
 int num,i,j,n,divisor;
 printf ("Enter the number:- ");
 scanf("%d",&num);
 
for (j=15;j>=1;j--)
{  divisor=pow (2,j-1);
   n =num/divisor;
   if (n==1)
 	{
 for (i=j;i>=1;i--)
   { 
      divisor=pow (2,i-1);
      n=num/divisor;
   	  printf ("%d",n);
   	  if(num>=divisor)
   	    num=num-divisor;
   	}
   break;
 	}
 }
}