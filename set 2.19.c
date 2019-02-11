#include <stdio.h>

int main()
{
   int n,a=0,c=0,r,b,d,i,s=1,e,j;
   scanf("%d %d",&n,&e);
   for(i=n;i<=e;i++)
   {
       a=0;
       c=0;
       s=1;
       b=i;
       d=i;
   while(d>0)
   {
       c++;
       d=d/10;
   }
   while(b>0)
   {
       r=b%10;
       for(j=1;j<=c;j++)
       {
           s=s*r;
       }
       a=a+s;
       b=b/10;
       s=1;
   }
  
   if(a==i)
   {
       printf("%d",a);
   }
   }
    return 0;
}
