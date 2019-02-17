#include <stdio.h>

int main()
{
    int n,k,i,num[100],c=0,j;
    scanf("%d %d",&n,&k);
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(j=0;j<n;j++)
    {
        if(num[j]==k)
        {
            c=1;
        }
           }
    if(c==1)
    {
        
    printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
 
}
