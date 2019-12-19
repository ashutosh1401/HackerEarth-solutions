#include <stdio.h>
 
int main(){
	int n,i,v,g,count1=0,count2=0,cost,j,k,t,q;
	scanf("%d\n", &n);              		
	for(i=1;i<=n;i++)
	{ scanf("%d %d\n",&v,&g);
	  scanf("%d",&j);
	  count1=0;
	  count2=0;
	  for(k=0;k<j;k++)
	  { scanf("%d %d\n",&t,&q); 
	  if(t==1)
	    count1++;
	  if(q==1)
	    count2++;}
	 
	   int cost1=count1*v+count2*g; 
	   int cost2=count1*g+count2*v; 
	   if(cost1>cost2)
	   printf("%d\n",cost2);
	   else 
	   printf("%d\n",cost1);
	} return 0;
	        
	       
	         
}
 
