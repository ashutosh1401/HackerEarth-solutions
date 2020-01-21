#include <bits/stdc++.h>

using namespace std;
int F(int x,int y){
    if(x==0)
     return (y+1)%1000;
    else if(x>0&&y==0)
     return (F(x-1,1))%1000;
    else if(x>0&&y>0)
     return F(x-1,F(x,y-1));
}

int main() {
	int x,y,ans,i,a,rev=0;
	scanf("%d %d\n",&x,&y);
	ans=F(x,y);
	printf("%03d",ans);
}
