#include <stdio.h>
#include<string.h>
int main(){
	int x=0,y=0,i,l;
	char s[20];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{ if(s[i]=='z')
	   x++;
	  else if(s[i]=='o')
	   y++;
	} if(2*x==y)
	   printf("Yes");
	  else
	   printf("No");
}
