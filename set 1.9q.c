#include <stdio.h>

int main()
{
    int n,k,i=0,sum=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    printf("%d",i);
    for(i=0;i<=k;i++)
    sum=sum+i;
    printf("\n%d",sum);

    return 0;
}
