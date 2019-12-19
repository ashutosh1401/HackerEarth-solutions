#include <stdio.h>
 
int main(){
	int sh,sm,eh,em,i,t,k,s,n; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d %d %d %d\n",&sh,&sm,&eh,&em);              			
	 k=((eh*60+em)-(sh*60+sm));
	// Writing output to STDOU
	
	 t=k%60; 
	 s=k/60;
	 printf("%d %d\n",s,t);}
	 return 0;
	 
}
