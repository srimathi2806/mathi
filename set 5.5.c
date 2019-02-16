#include<stdio.h>
int main()
{
    int c=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        c++;
        n=n/10;
    }
    printf("%d",c);
    return 0;
}
