#include<stdio.h>
int main()
{
int n,n1,temp;
printf("enter two numbers");
scanf("%d%d",&n,&n1);
temp=n;
n=n1;
n1=temp;
printf("%d\t%d",n,n1);
return 0;
}
