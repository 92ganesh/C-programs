#include <stdio.h>
#include <stdlib.h>
int main() {
	int ans=1,x;
	scanf ("%d",&x);
	for (int n=x;n>0;n--){
		ans=ans*n;
	}
	printf ("%d factorial is %d",x,ans);
	
}