#include <stdio.h>
 
int main(){
	int i,n;
	char c[1000000];
	scanf("%d\n",&n);
	gets(c);
	for(i=0;i<n;i++)
	{ if(c[i]=='H'&&c[++i]=='H') 
	   { printf("NO\n");
	    goto last;}
	 else if(c[i]=='.')
	 {  c[i]='B';}
	 
	} printf("YES\n"); 
	  
	  puts(c); 
	  last:
	  return 0;
	             			                           
}
 
