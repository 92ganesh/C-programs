#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{ 
 int num,i,n,divisor;
 printf ("Enter the number:- ");
 scanf("%d",&num);
 
 for (i=15;i>=1;i--)
   { 
      divisor=pow (2,i-1);
      n=num/divisor;
   	  printf ("%d",n);
   	  if(num>=divisor)
   	    num=num-divisor;
   	}
}