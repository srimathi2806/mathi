#include<stdio.h>
void main()
{
int n,n1=0,n2=1,n3=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(n3<=n)
    {
        n3=n1+n2;
        printf("%d\t",n3);
    }
    n1=n2;
    n2=n3;
    getch();
}
