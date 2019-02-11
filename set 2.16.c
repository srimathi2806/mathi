#include <stdio.h>

int main()
{
   int n,a,i,c=0,j;
   scanf("%d %d",&a,&n);
   for(i=a;i<n;i++)
   { c=0;
       for(j=1;j<=i;j++)
       {
         if(i%j==0)
       {
         
           c++;
       }
       }
       if(c==2)
      {
          printf(" %d ", i );
     
       }
   }
       return 0;
}
