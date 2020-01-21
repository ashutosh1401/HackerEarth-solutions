#include <bits/stdc++.h>

using namespace std;
int main(){
        long int t,n;
        cin>>t;
        for(int j=0;j<t;j++)
        {
            long int i,sum1=0,sum2=0;
            cin>>n; 
            long int a[n],b[n];
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum1=sum1+a[i];
            }
            for(i=0;i<n;i++)
            {
                cin>>b[i];
                sum2=sum2+b[i];
            }

            if(sum1==sum2)
                cout<<"YES\n";
            else
                cout<<"NO\n"; 
                
        } 
}
