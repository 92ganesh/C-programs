#include <stdio.h>
#include <stdlib.h>

int main ()
{ 
    printf ("Enter the number to know to know if its Prime or Composite number \n");
   
	int j;
	scanf ("%d",&j);
   int m;
	int x=2;
	printf ("I found it\n");
	while (x <= j)
	{
		m=j%x;
		if (m==0)
		{
			if (x==j)
			{  printf ("%d is a prime number",j);
				}else { printf ("%d is a composite number",j);
					}
			break;
		}
		
		x++;
		
	}
	
	printf ("\n ends here________________");
}