#include <stdio.h>
int main() {
	long int n,i,res=0,o=0,e=0,j;
	scanf("%ld\n",&n); 
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%ld ",&a[i]);  
	    a[i]=a[i]+a[i-1];
	    if(a[i]%2==0)
	     e++; 
	    else 
	     o++;
	}
     res= (e*(e-1))/2+e+(o*(o-1))/2;
	printf("%ld",res);
}
