
#include<stdio.h>
int main()
{
    int rem,c;
    scanf("%d",&c);
    while(c!=0)
    {
        rem=c%10;
        if(rem%2!=0)
        {
            printf("%d\t",rem);
        }
        c=c/10;
    }
    return 0;
}
