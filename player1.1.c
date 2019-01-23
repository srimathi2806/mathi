#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count;i>=0;i--)
    {
    printf("%c",a[i]);
        
    }
    return 0;
}
