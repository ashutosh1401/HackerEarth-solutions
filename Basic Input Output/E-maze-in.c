#include<stdio.h>
int main()
{
int ud=0,lr=0,i=0;
char str[200];
gets(str);
while(str[i]!='\0')
{
if(str[i]=='L')
{
lr--;
}
else if(str[i]=='R')
{
lr++;
}
else if(str[i]=='U')
{
ud++;
}
else if(str[i]=='D')
{
ud--;
}
i++;
}
printf("%d %d",lr,ud);
return 0;
}
