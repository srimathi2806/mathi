
#include <stdio.h>

int main()
{
    int n,rem,rev;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rem+10*rev;
        n=n/10;
    }
 printf("%d",rev);
    return 0;
}
