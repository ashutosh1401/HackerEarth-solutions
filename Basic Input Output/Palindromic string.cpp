#include <bits/stdc++.h> 
 
 
using namespace std;
 
int main() {
	int n,i,flag=1,j;
    char s[100];
	cin>>s;
	n=strlen(s)-1; 
	for(i=0,j=n;i<n/2;i++,j--) 
	{  if(s[i]!=s[j])
	     flag=0; }
	     if(flag==1)
	       cout<<"YES"<<endl;
	     else
	       cout<<"NO"<<endl;
}
