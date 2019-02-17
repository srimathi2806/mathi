#include<stdio.h>
int main() 
{
	int n,a,d,i,sum=0;

	scanf("%d",&a);
	scanf("%d",&d);
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	return 0;
}
