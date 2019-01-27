#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    scanf(" %d ",&n);
    while(n>0)
    
    rem=n%10;
    sum++;
    n=n/10;
    printf("total=%d",sum);
    return 0;
}
