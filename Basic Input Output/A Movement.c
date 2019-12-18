#include <stdio.h>
 
int main(){
	int n,count=0;
	scanf("%d", &n); 
    while(n>5)
    { n=n-5;
      count++; 
      }
    count++;
    printf("%d",count);
    return 0;
    
}
