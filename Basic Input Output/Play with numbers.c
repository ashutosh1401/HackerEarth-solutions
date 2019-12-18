#include <stdio.h>
 
int main(){ 
      unsigned long long int n,q,l,r; 
    unsigned long long int i,floor,ans;
     scanf("%lld %lld\n",&n,&q); 
     long long int arr[n];
     for(i=1;i<=n;i++)
     { scanf("%lld ",&arr[i]);
         arr[0]=0; 
         arr[i]=arr[i]+arr[i-1]; 
     } while(q--)
     { scanf("%lld %lld\n",&l,&r);
         ans=arr[r]-arr[l-1]; 
       floor=ans/(r-l+1); 
       printf("%lld\n",floor);}
   
}
