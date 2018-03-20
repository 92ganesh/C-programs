#include <stdio.h>
#include <conio.h>

void main ()
{
	int n,c,a=0,b=1;
	clrscr ();
	printf ("Enter the number ");
	scanf ("%d",&n);
	for (int i=1;i <=n;i++)
	{  c=a+b;
		printf ("%d",c);
		a=b;
		b=c;	
	}
	getch ();
	
	}