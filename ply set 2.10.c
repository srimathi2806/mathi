#include <stdio.h>

int main()
{
    char c[30];
    int i;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='z')
        {
            c[i]='c';
        }
        else  if(c[i]=='x')
        {
            c[i]='a';
        }
        else  if(c[i]=='y')
        {
            c[i]='b';
        }
        else
        {
            c[i]=c[i]+3;
        }
        
    }
    printf("%s",c);
    
    return 0;
}
