#include <stdio.h>

int main()
{
    int s[100],n,i,k,c,t=0,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                s[i]='$';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]%2!=0)
        {
            c=s[i];
            t++;
        }
        if(t==k)
        {
            break;
        }
    }
    printf("%d",c);
    return 0;
}
