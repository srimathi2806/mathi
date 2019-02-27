#include<stdio.h>
int main()
{
	int n,n2,n1,i;
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
	    n=n1;
	}
	else
	{
	    n=n2;
	}
    for(i=n;i>=2;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%d",i);
            break;
        }
    }
	return 0;
}
