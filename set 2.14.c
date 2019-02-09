#include <stdio.h>

int main()
{
   int n,i,c;
   scanf("%d %d",&n,&c);
   for(i=n;i<=c;i++)
   {
       if(i%2!=0)
       {
           printf("\n%d", i );
       }
   }
   
       return 0;
}
