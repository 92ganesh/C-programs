#include <stdio.h>
#include <conio.h>
// To find factorial of Big numbers
void main()
{  int big [100];//={0000,7664,81,2902,243};
     int i,j,k,n,last,digits;
    long int c=0,val,multi;
    clrscr();
    scanf ("%d",&n);
    for (i=1;i <=99;i++)
    {   big [i]=0;
    }
    big [0]=1;
  for (j=2; j<=n;j++)  {
     c=0;   last=100;    
    // multiplying
    for (i=99; big [i]==0;i--)
	  {  last--;
	  }    
    
    for (i=0; i<=last;i++)
    {  multi = (long int)big [i]*(long int)j+(long int)c;
    	  val=multi%10000;
    	   c= multi/10000;
    	   big [i]=val;
   }
  
	  big [i]=c;
  }  
	  
	 //printing result
	 last=99;
	  for (i=99; big [i]==0;i--)
	  {  last--;
	  } 

  for (i=last; i>=0;i--)
	 {  digits=big [i];
	    for (j=1; digits/10!=0;j++)
	    {  	digits/=10;
	    }     
	    if (i!=last)
	    {
	        for (k=j;k <4;k++)
	           {  printf ("0");
	            }    
	    }
	 	  printf ("%d",big [i]);
	 }   
	  printf ("\n\n------------ END ---------------");
	getch ();
}