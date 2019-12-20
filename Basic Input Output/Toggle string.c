#include <stdio.h>
 
int main(){
	 char c[100]; 
	 int i;
     for(i=0;i<100;i++)
	{ scanf("%c",&c[i]);
	  if(c[i]>='a'&&c[i]<='z')
	    c[i]=c[i]-32;
	  else if(c[i]>='A'&&c[i]<='Z')
	    c[i]=c[i]+32;
	  else
	    break;
	    printf("%c",c[i]);}
	
	 

}
 
