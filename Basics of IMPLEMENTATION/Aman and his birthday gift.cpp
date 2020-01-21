#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a,b,c,k,i,flag=0;
	cin>>a>>b>>c;
	for(i=1;i<=b;i++)
	{
	    k=a+i*c;
	    if(k==b)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
	
}
