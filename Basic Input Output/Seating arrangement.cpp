#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n,t,i;
	cin >>t;
	for(i=0;i<t;i++)
	{ cin>>n;
	  n=n+2*(6-(n-1)%12)-1;
	cout<<n<<" ";
	 if(n%6<2)
	   cout<<"WS"<<endl; 
	 else if(n%6==2||n%6==5)
	    cout<<"MS"<<endl;
	 else
	   cout<<"AS"<<endl;
	   } 
}
