#include<stdio.h>
int main()
{
char str[100],str2[100],n1=0,n2=0,i,j;
scanf("%s",str);
scanf("%s",str2);
for(i=0;str[i]!='\0';i++)
{
    n1++;
}
for(j=0;str2[j]!='\0';j++)
{
    n2++;
}if(n1>n2)
{
    printf("%s",str);
}
else
{
    printf("%s",str2);
}
return 0;
    
}
