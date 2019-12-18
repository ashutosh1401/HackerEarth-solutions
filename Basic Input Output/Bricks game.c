#include <stdio.h>
 
int main(){
	int n,i,t;
	scanf("%d", &n);
	t=n;
	for(i=1;i<n;i++)
	{ t=t-i;
	  if(t<=0)
	  { printf("Patlu");
	    goto last;
	  }
	 t=t-(2*i);
	 if(t<=0)
	  { printf("Motu");
	  goto last;
	  }
	}
	last:
	return 0;
}
