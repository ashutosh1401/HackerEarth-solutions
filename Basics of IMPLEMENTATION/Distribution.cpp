#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,j,k,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n&&j<i;j++)
	    {
	        for(k=0;k<n&&k<j;k++)
	        {
	            if((i+j+k)==n)
	              count++;
	        }
	    }
	}
	cout<<count;
}
