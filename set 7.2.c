/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
  int n,i=0,c=0,sum=0,rem;
  scanf("%d",&n);
  while(n>0)
  {
      rem=n%10;
      if(rem==0 || rem==1)
      {
         c=1;
      }
      else
      {
        sum=1;  
      }
      n=n/10;
  }
  if(c==1 && sum==0)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  
  return 0;
}
