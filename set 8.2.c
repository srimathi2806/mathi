#include<stdio.h>
int main()
{
char str[20];
int i,f=0;
printf("Enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
    f=1;
}
}
if(f==1)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
