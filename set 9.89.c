#include <stdio.h>

int main()
{
  char a[100];
  int n,i,c=1,j;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]==a[j])
          {
             printf("\nno");
             c=1;
             break;
          }
      }
  }
      if(c==1)
      {
          printf("\nyes");
      }
    return 0;
}
