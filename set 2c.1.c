
#include <stdio.h>

int main()
{
    int n,p,c=1,i;
    scanf("%d %d",&n,&p);
    for(i=0;i<p;i++)
    {
        c=c*n;
    }
    printf("%d",c);
       return 0;
}
