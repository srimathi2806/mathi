#include <stdio.h>

int main()
{
 char s[100];
 int flag=0,sum=0,i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {
       flag=1;
    }
    else if(s[i]>='0'&&s[i]<='9')
    {
        sum=1;
    }
    }
    if((flag==1)&&(sum==1))
    {
        printf("yes");
    }
    else if(flag==1)
    {
        printf("albha only presnt");
    }
    else
    {
        printf("num only present");
    }
    
    return 0;
}
