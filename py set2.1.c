#include <stdio.h>

int main()
{
 char s[100];
 int i;
 scanf("%s",s);
 for(i=0;i<1;i++)
 {
     if(s[i]=='s')
     {
         printf("weekend");
     }
     else
     {
         printf("no weekend");
     }
 }
 return 0;
}

