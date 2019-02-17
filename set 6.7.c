
#include <stdio.h>

int main()
{
    int n,rep,i,num[100],c=0;
    scanf("%d",&n);
    scanf("%d",&rep);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]==rep)
        {
            c++;
        }

    }
    printf("%d",c);
    return 0;
 
}
