#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=1,j=1;
    float x,y,z,p,q,r;
    char *m="st";
 float a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
	float eq_var[12]={a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3};
	printf ("Enter the coefficient of equations one by one \n");
//code to save coefficients
	while (i<10){
		if (i==5){
			m="nd";
		}else if (i==9){m="rd";}
	     printf ("For the %d%s eq 'a%d+b%d+c%d=d%d'\n",j,m,j,j,j,j);
	     printf ("a%d = ",j);
     	scanf ("%f",&eq_var[i-1]);

         printf ("b%d = ",j);
     	scanf ("%f",&eq_var[i]);

     	printf ("c%d = ",j);
     	scanf ("%f",&eq_var[i+1]);

     	printf ("d%d = ",j);
	     scanf ("%f",&eq_var[i+2]);
	     j++;

	    if(i==1){
            i=5;
	    }else if(i==5){
	        i=9;
	    }else{
	        break;
	    }
 }

 //code to iterate
 p=0;
 q=0;
 r=0;
 for (int c=0;c <1000000;c++){
 	x=(eq_var[3]-eq_var[1]*q-eq_var[2]*r)/eq_var[0];
 	y=(eq_var[7]-eq_var[4]*p-eq_var[6]*r)/eq_var[5];
 	z=(eq_var[11]-eq_var[8]*p-eq_var[9]*q)/eq_var[10];

    p=x;
    q=y;
    r=z;
 }

   printf("x=%f \ny=%f \nz=%f",x,y,z);
}
