
#include <stdio.h>

int main()
{
    int a[10],b[10],c[10],i,c1=0,f=0;
    //scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<2;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<2;i++)
    {   c1=0;
        f=0;
        if(a[i]==b[i] &&a[i]==c[i]&&b[i]==c[i])
        {
            c1=1;
        }else if(a[1]==b[1]&& b[1]==c[1]&& a[1]==c[1])
        {
            f=1;
        }
    }
    
if(c1==1||f==1 )
{
    printf("yes");
}else
{
    printf("no");
}
    return 0;
}
