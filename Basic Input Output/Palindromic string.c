#include <stdio.h>
#include<string.h> 
 
int main(){
    char s[100];
    int n,j,i,chk=1;
    
    scanf("%s",s);
    n=strlen(s)-1;
    for(i=0,j=n;i<n/2;i++,j--)
    { if(s[i]!=s[j])
       { chk=0;
          break;}}
        if(chk==1)
          printf("YES");
        else
          printf("NO"); 
         
    
}
