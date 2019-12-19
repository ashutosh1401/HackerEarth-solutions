#include <stdio.h>
#include<string.h> 
int main(){
    int i,last;
    char a[9];
    scanf("%s",&a);
    if((a[0]+a[1])%2==0&&(a[3]+a[4])%2==0&&(a[4]+a[5])%2==0&&(a[7]+a[8])%2==0)
   { if(a[2]!='A'&&a[2]!='E'&&a[2]!='I'&&a[2]!='O'&&a[2]!='U'&&a[2]!='Y')
     printf("valid");
       else
        goto last;
        
   }
    else
     last:
     printf("invalid");
    // Reading input from STDIN

}
