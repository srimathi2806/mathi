#include <stdio.h>

int main()
{
    int n[100],min,k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for(i=0;i<k;i++)
    {
        if(n[i]<min)
        {
            min=n[i];
        }
    }
    printf("%d",min);
    
        return 0;
}
