#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{ char s[50];
  char st[500]="";
  int i,j,len,end,f=0;
  clrscr ();
  gets (s);
  len=strlen(s);
  end=len-1;
  for (i=len; i>=0; i--)
   {   
       if (s[i]==' ')
   	   {  
   	       for (j=i+1;j<=end;j++)
   	      {   st [f]= s [j];
   	           f++;
   	           
   	      }
   	      st[f] = ' ';
   	      f++;
   	      end=i-1;
   	   }    
   }
     strcat (st," ");
     strncat(st,s,end+1);
     printf ("%s",st);
   
	getch ();
	
}