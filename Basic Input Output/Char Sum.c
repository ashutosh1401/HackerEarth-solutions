#include <stdio.h>
 
int main(){
    char c[100];
    int sum=0,i,k;
    for(i=0;i<100;i++)
    { scanf("%c",&c[i]); 
      if(c[i]=='\0') 
       break;
     switch(c[i])
     {  case'a': k=1;
              break;
        case'b': k=2;
              break;
        case'c': k=3;
              break;
        case'd': k=4;
              break;
        case'e': k=5;
              break;
        case'f': k=6;
              break;
        case'g': k=7;
              break;
        case'h': k=8;
            break;
        case'i': k=9;
               break;
        case'j': k=10;
               break; 
        case'k': k=11; 
              break; 
        case'l': k=12; 
              break; 
        case'm': k=13; 
              break; 
        case'n': k=14; 
              break; 
        case'o': k=15; 
              break; 
        case'p': k=16; 
              break; 
        case'q': k=17; 
              break; 
        case'r': k=18; 
              break; 
        case's': k=19;
              break; 
        case't': k=20;
              break; 
        case'u': k=21; 
              break; 
        case'v': k=22; 
              break; 
        case'w': k=23; 
              break; 
        case'x': k=24; 
              break; 
        case'y': k=25; 
              break; 
        case'z': k=26; 
              break;
     }
        sum=sum+k;}
        printf("%d",sum); 
    
    
                                
}
 
