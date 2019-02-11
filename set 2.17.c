#include <stdio.h>

int main()
{
   int n,a=0,c=0,r,b,d,i,s=1;
   scanf("%d",&n);
   b=n;
   d=n;
   while(n>0)
   {
       c++;
       n=n/10;
   }
   while(b>0)
   {
       r=b%10;
       for(i=1;i<=c;i++)
       {
           s=s*r;
       }
       a=a+s;
       b=b/10;
       s=1;
   }
   if(a==d)
   {
       printf("armstrong");
   }
   else
   {
       printf("not armstromng");
   }
  
       return 0;
}
