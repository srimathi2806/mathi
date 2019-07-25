
#include <stdio.h>
#include<string.h>

int main()
{
   // printf("Hello World");
   int i,c1=0,c=0,r;
   char n[30];
   scanf(" %[^\t\n]s",&n);
   for(i=0;n[i]!='\0';i++)
   {
       c1++;
    if(n[i]<='9' && n[i]>='0')
    {
        c++;
    }
   }
   if(c==c1)
   {
       printf("yes");
   }else
   {
       printf("no");
   }

    return 0;
}
