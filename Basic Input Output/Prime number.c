#include <stdio.h>
 
int main(){
	int num,i,j,prim;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{ prim=0;
	  for(j=1;j<=num;j++)
	  { if(i%j==0)
	      prim++;
	      
	  }   
	    if(prim==2)
	      printf("%d ",i);
	}
	 return 0;
	 
	   
	
}
 
