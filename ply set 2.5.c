#include<stdio.h>
 #include<conio.h>
 void main()
{
char s[50],ch;
int i,j,c=0,m=1;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
    c=1;
for(j=i+1;s[j]!='\0';j++)

if(s[i]==s[j])
{
c=c+1;
if(c>m)
{
m=c;
ch=s[i];
}
}
 
}
printf("%c",ch);
  getch();
}
