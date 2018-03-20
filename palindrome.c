#include <stdio.h>
#include <stdlib.h>
/*palindrome is number which if reversed appears to be same 
eg.121, 1234321, 5445
*/
int main (){
	int n,r,num;
	int rev=0;
	printf("Enter the number- ");
	scanf ("%d",&n);
	num=n;
	while (n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		}
	if (rev==num){
		printf ("Its a palindrome");
	}else {
		printf ("its not a palindrome");
	}
	
}