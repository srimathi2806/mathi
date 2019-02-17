#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	int l=0,i;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	    l++;
	}
	for(i=0;i<l;i++)
	{
	    if(i==0)
	    {
	    s[0]=s[0]-32;
	    }
	    if(s[i]==' ')
	    {
	    s[i+1]=s[i+1]-32;
	    }
	    
	}
	printf("%s",s);
	return(0);	
}
