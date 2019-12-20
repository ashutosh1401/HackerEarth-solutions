#include <stdio.h>
#include <string.h> 
#include <math.h>
int main(){
    int i,n,k;
	char a[1000000]; 
	gets(a);
	scanf("\n%d",&k); 
	n=strlen(a);
	for(i=0;i<n;i++)
	{   
	    if(a[i]>=65 && a[i]<=90) 
	      { if(a[i]+k>90)
	        {  a[i]=65+(a[i]+k-91)%26; }
	         else
	            a[i]=a[i]+4;
	      }
	    else if(a[i]>=97 && a[i]<=122) 
	    { if(a[i]+k>122) 
	        a[i]=97+(a[i]+k-123)%26;
	      else
	        a[i]=a[i]+4;
	    }  
	    else if(a[i]>=48 && a[i]<=57)
		{
			if(a[i]+k>57)
				a[i]=48+(k-58+a[i])%10;
			else
				a[i]=a[i]+k;
		    
		} 
		else if(a[i]=='-'||a[i]==';'||a[i]==','||a[i]=='.'||a[i]=='%'||a[i]==':')
		  a[i]=a[i];
	
	}
	 puts(a);
	return 0;

}
 
