#include <stdio.h>
 
int main(){
	int d,r,x,count=0,i;
	scanf("%d", &d); 
	for(i=0;i<d;i++)
	{ scanf("%d %d\n",&r,&x); 
	    if((2*22*r)/7<=100*x)
	       count++; 
	 } 
	   printf("%d",count);
	                                                                 
}
