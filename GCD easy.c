#include <stdio.h>
#include <conio.h>
// GCD by easy method
void main()
{
   long int n1,n2,gcd;
   printf ("Enter two numbers to find GCD\n");
   printf ("1st number:- ");
   scanf ("%ld",&n1);
   printf ("2nd number:- ");
   scanf ("%ld",&n2);
   
   while (n1!=n2)
   {
   	    if (n1>n2)
   	       n1=n1-n2;
   	    else 
   	        n2=n2-n1;
   		}
   
   printf ("GCD is %ld",n1);
}