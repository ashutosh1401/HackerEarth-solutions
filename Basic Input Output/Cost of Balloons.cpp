#include<bits/stdc++.h>
using namespace std;

 
int main(){
  int t; cin>>t;
  for(int i=0;i<t;i++){
    int x=0, y=0, xx, yy, tt; cin>>xx>>yy>>tt;
    while(tt--){ int t1,t2; cin>>t1>>t2; x+=t1; y+=t2; }
   cout <<(min(x,y)*max(xx,yy)+max(x,y)*min(xx,yy)<<"\n";
  }
  return 0;
}
