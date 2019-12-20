#include <stdio.h>
 
int main(){
	unsigned long long int n,a,b,t,i;
	scanf("%lld\n",&t);
	for(i=0;i<t;i++)
	{ scanf("%lld %lld\n",&a,&b); 
	if(a>b)
	  n=a/b;
	else
	  n=b/a;
	  printf("%lld\n",n);
	} 
}
