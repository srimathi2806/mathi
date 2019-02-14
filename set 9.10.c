#include <stdio.h>

int main()
{
   int i;
   char ch[100];
   scanf("%s",ch);
   for(i=0;ch[i]!='\0';i++)
   {
       if(ch[i]>='0' && ch[i]<='9')
       {
           printf("%c",ch[i]);
       }
   }
    return 0;
}
