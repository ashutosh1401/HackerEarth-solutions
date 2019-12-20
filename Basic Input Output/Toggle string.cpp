#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int i;
	char c[100];
	for(i=0;i<100;i++)
	{  cin >> c[i];
	  if(c[i]>='a' && c[i]<='z')
	   c[i]=c[i]-32;
	  else if(c[i]>='A' &&c[i]<='Z')
	   c[i]=c[i]+32; 
	  else
	    break;
	  cout << c[i];}
 
}
