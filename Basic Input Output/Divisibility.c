#include <stdio.h>
 
void main(){
	long long int a[1000000],i=0,n,t,sum=0;
	scanf("%lld\n",&n);
	for(i=0;i<n;i++)
	{ scanf("%lld ",&a[i]);}
      
       if(a[n-1]%10==0)
          printf("Yes\n");
        else
          printf("No\n");
          
     } 

