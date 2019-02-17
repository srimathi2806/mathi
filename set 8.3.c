#include<stdio.h>
int main()
{
int n,m,b,i,c=0;
scanf("%d %d%d",&n,&m,&b);
for(i=n;i<=m;i++)
{
    if(i==b)
    {
        c=1;
    }
}
if(c==1)
{
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
