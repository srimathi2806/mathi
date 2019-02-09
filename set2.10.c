#include <stdio.h>

int main()
{
    int a,b,c=1,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<b;i++)
    {
        c=a*i;
        printf("%d",c);
    }
    return 0;
}
