
#include<stdio.h>
int main()
{
    int n,c=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c=c+rem;
        n=n/10;
    }
    printf("%d",c);
    return 0;
}
