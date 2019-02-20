
#include<stdio.h>
void main()
{
   char s[30],m[30];
   int i,j,n,k=0;
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       scanf("%c",&s[i]);
       }
    s[i]=='\0';
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'){
            m[k]=s[i];
            k++;
        }
    }
    m[k]='\0';
    for(i=k-1;i>=0;i--)
    {
        printf("%c",m[i]);
    }
}
