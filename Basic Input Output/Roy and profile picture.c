#include <stdio.h>
 
int main(){
	int L,N,W,H,i;
	scanf("%d\n", &L);              		
    scanf("%d\n", &N);
    for(i=1;i<=N;i++)
    { scanf("%d %d\n", &W, &H);
      if(W>=L&&H>=L)
       {if(W==H)
          printf("ACCEPTED\n");
        else
          printf("CROP IT\n");}
        else if(W<L||H<L)
          printf("UPLOAD ANOTHER\n");
    }
    return 0;
}
