
#include <stdio.h>

int main()
{
int n,sum=0,sqr,rem;
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    sqr=rem*rem;
    sum=sum+sqr;
    n=n/10;
}
printf("%d",sum);
    return 0;
}
