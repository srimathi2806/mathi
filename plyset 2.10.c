#include <stdio.h>

int main()
{
    char c[30];
    int i;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++)
    {
        c[i]=c[i]+3;
    }
    printf("%s",c);
    
    return 0;
}
