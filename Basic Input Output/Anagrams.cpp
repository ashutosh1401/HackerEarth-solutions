#include <bits/stdc++.h>
 
using namespace std; 
 
int countdel(char a[],char b[]){
    int ans=0;
    int count1[26]={0},count2[26]={0}; 
    for(int i=0;a[i]!='\0';i++)
      count1[a[i]-'a']++; 
    for(int i=0;b[i]!='\0';i++)
      count2[b[i]-'a']++; 
    for(int i=0;i<26;i++)
      ans+=abs(count1[i]-count2[i]);
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
	int n,i,del;
	char a[10000],b[10000]; 
	cin >>n;
	for(i=0;i<n;i++)
	{ cin >> a; 
	  cin >> b; 
	  del=countdel(a,b); 
	  cout << del << "\n";
	} 
	return 0;
}
