#include <stdio.h>
 
int main(){
	int num,t;
	scanf("%d", &num);              			
	scanf("%d",&t);
	if(num<=23&&500<=t<=1000)
	  printf("Take Medicine");
    else
      printf("Don't take Medicine");
    return 0;
}
