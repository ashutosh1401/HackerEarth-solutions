 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n,i,t; 
	cin >> n;
	t=n; 
	for(i=0;i<n;i++)
	{ t=t-i; 
	  if(t<=0)
	  { cout <<"Patlu"; 
	    goto last; } 
	  t=t-(2*i); 
	  if(t<=0)
	  { cout <<"Motu"; 
	    goto last; } 
	} 
	last: 
	return 0; 
}
