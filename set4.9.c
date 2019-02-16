#include<stdio.h>
void main()
{
int a[20],i,temp,n;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
temp=a[1];
for(i=1;i<=n;i++)
{
if(temp<a[i])
{
temp=a[i];
}
}
printf("%d",temp);
}
