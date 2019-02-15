#include<stdio.h>
int main()
{
    int a[20],b,n,n1,i,j;
    scanf("%d %d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==n1)
        {
            b=a[j];
            printf("%d",b);
        }
    }
    return 0;
}
