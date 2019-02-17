#include<stdio.h>
int main()
{
   int n1,n2,prod,p,f=0,i,a;
   scanf("%d%d",&n1,&n2);
   prod=n1*n2;
   a=prod;
   for(i=1;i<=prod/2;i++)
   {
       p=i*i;
       if(p==a)
       {
           f=1;
       }
   }
   if(f==1)
   {
       printf("perfect sqr");
   }
   else
   {
       printf("not perfect sqr");
   }
   
    return 0;
}
