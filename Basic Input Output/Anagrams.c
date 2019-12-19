#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
 
int countdel(char a[],char b[]){
    int ans=0;
    int count1[26]={0},count2[26]={0}; 
    for(int i=0;a[i]!='\0';i++)
      count1[a[i]-'a']++; 
    for(int i=0;b[i]!='\0';i++)
      count2[b[i]-'a']++; 
    for(int i=0;i<26;i++)
      ans+=abs(count1[i]-count2[i]);
    return ans;
}
 
int main(){
	int n,i,del;
	char a[100000],b[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{ scanf("%s\n",&a);
	  scanf("%s\n",&b);
	  del=countdel(a,b);
	    printf("%d\n",del); 
	}
	     
      
}
