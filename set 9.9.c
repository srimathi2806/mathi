#include <stdio.h>
int main()
{
    int n,i,rem,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
