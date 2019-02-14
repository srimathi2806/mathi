#include <stdio.h>

int main()
{
    int a,rem,rev;
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%10;
        rev=rem+rev*10;
        a=a/10;
    }
    
    printf("%d",rev);
return 0;
}
