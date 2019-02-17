*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,len=0;
	printf("\nEnter the string: ");
	scanf("%s",&a);
	len=strlen(a);
	if(len%2==0)
	{
		i=len/2;
		a[i]='*';
		a[i-1]='*';
	}
	else
	{
		i=len/2;
		a[i]='*';
	}
	printf("\nThe modulated string is %s.",a);
	return 0;
}
