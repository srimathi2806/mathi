#include<stdio.h>
int main()
{
char s[20];
int i,j,f=0;
printf("Enter the string");
scanf("%s",s);
i=0;
j=strlen(s)-1;
while(j>1)
{
if(s[i++]!=s[j--])
{
f=1;
break;
}
}
if(f==1)
printf("\nNO");
else
printf("\nYES");
return 0;
}
