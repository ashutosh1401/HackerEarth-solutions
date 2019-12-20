#include <stdio.h>
 
int main(){
	int n,t,i; 
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{ scanf("%d\n",&n); 
	   n=n+2*(6-(n-1)%12)-1; 
	   printf("%d ",n);
	   if(n%6<2) 
	     printf("WS\n"); 
	   else if(n%6==2||n%6==5)
	     printf("MS\n"); 
	   else
	     printf("AS\n"); 
	}
	     
	                                      
}
