#include<stdio.h>
#include<conio.h>

int fact(int);   // Function prototype declaration

void main()
{
int n,m;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
m=fact(n);        // Function calling
printf("\nFactorial = %d",m);
getch();
}

/* Alternate method:-
Function Definition – Non recursive version */ 

// int fact(int n)  // Function header       
// {                /* Body of the function */
/*
int f=1;
for(int i=1;i<=n;i++)
  f=f*i;
return f; 
}  */

//The recursive version is given below:

int fact(int x)
{
if(x==1)  // base condition
 return 1;
else
 return (x*fact(x-1));
}