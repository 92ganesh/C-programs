#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float p,n,t,r,interest;
p=5000;
t=10;
r=5.5;
n=2;
interest=p*(pow (1+r/n/100.0,t*n))-p;
printf ("interest is %f",interest);
}