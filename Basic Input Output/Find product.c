#include <stdio.h>
 
int main(){
	unsigned long long int n,a[1000],ans=1;
	int i,b;
	b=pow(10,9)+7;
	scanf("%lld", &n); 
	for(i=0;i<n;i++)
	{  scanf("%lld",&a[i]);
	    ans=((ans*a[i])%b);}
	    printf("%lld",ans);

}
