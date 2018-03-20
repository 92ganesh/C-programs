#include <stdio.h>

int main ()
{
     int n;
     scanf ("%d",&n);
     int x=0;
	while (n>0)
	{
		for (int m=0;m <x;m++)
		{ printf (" ");
	  	}
    	int a=1+2*(n-1);
		for (int s=0;s <a;s++)
		{printf ("*");
	  	}
		printf ("\n");
		x++;
		n=n-1;
	}
}