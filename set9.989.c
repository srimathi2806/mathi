#include <stdio.h>

int main()
{
  char a[100];
  int i,c=1,j,ord;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]>a[j])
          {
             ord=a[i];
             a[i]=a[j];
             a[j]=ord;
          }
      }
  }
      printf("%s",a);
    return 0;
}
