#include <stdio.h>

int main()
{
	char str[50];
	int i,n,j;
	scanf("%s %d",str,&n);
	int len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(j=n;j<=len;j++)
	{
		printf("%c",str[j]);
	}

	return 0;
}
