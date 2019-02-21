#include<stdio.h>
#include<string.h>
int main() 
{
   
    int n,i,c=0,j,x;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	 {
	     x=i;
	     c=0;
	     for(j=1;j<=x;j++)
	     {
	         if(x%j==0)
	         {
	             c++;
	         }
	     }
	     if(c==2)
	     {
	         printf("%d ",i);      
	     }
	 }
	}
	return 0;
}
