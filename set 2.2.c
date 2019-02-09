#include <stdio.h>

int main()
{
   int a,n,rem,rev=0;
   scanf("%d",&a);
   n=a;
   while(n>0)
   {
       rem=n%10;
       rev=rem+10*rev;
       n=n/10;
   }
       if(rev==a)
       {
           printf("palindrome");
           
       }
       else
       {
           printf("not palindrome");
       }
   
       return 0;
}
