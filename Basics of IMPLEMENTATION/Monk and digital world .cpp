#include <bits/stdc++.h>
 
using namespace std;
int countChar(char a[],char b[]){
      int count1[26]={},count2[26]={},res=0;
      for(int i=0;a[i]!='\0';i++)
      { count1[a[i]-'a']++;
      }
      for(int i=0;b[i]!='\0';i++)
       { count2[b[i]-'a']++;
      }
      for(int i=0;i<26;i++)
      { res+=abs(count1[i]-count2[i]);}
      return res;
}
 
int main() {
	int n,ans;
	cin >>n;
	char a[n],b[n];
	cin >>a;
	cin >>b;
	ans=countChar(a,b); 
	if(ans==0)
	  cout <<"YES\n";
    else
      cout <<"NO\n";
}
