#include <stdio.h>
 
int main(){
	int t,i,k,s,a=0,b=7;
	scanf("%d", &t);              			
	for(i=1;i<=t;i++) 
	{ scanf("%d\n",&k);
	  if((b-k)<(k-a))
	   { b=k; 
	     printf("B\n");} 
	   else 
	   { a=k; 
	     printf("A\n");}
	}
	return 0;
}
