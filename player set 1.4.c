#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[50];
	scanf("%s",s);
	strcat(s,".");
	printf("%s",s);
	return 0;
}
