
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n,i,t,a=0,b=7;
	cin>>t;
	for(i=0;i<t;i++)
	{cin>>n;
	 if((b-n)<(n-a))
	   {b=n;
	    cout<<"B"<<"\n";}
	 else
	  {a=n;
	    cout<<"A"<<"\n";}
	}
	    
}
