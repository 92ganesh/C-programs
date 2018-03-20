#include <stdio.h>
#include <conio.h>

void main()
{ int n1,n2,gcd=1,div,i;
  printf ("Enter two numbers to get GCD\nnumber1:- ");
  scanf ("%d",&n1);
  printf ("number2:- ");
  scanf ("%d",&n2);
  
  for (i=2;i <=n1||i <=n2;i++)
   {
   	div=n1%i==0&&n2%i==0;
   	if (div==1){
   		gcd=i;
   		}
   }
   printf ("GCD is %d",gcd);
}