#include <stdio.h> 
#include <string.h>
 
int main(){
	int k,i,n;
	char x[1000000];
    scanf("%s %d",&x,&k);
	n=strlen(x); 
	for(i=0;i<n&&k;i++)
	{ if((x[i])!='9')
	  { x[i]='9'; 
	    k--;} 
	} puts(x);
}
