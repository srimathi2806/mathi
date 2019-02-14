#include <stdio.h>

int main()
{
    int a,i,n[1000],j,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<a;j++)
    {
        sum=sum+n[j];
    }
    printf("%d",sum);
return 0;
}
