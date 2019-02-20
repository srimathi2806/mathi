#include <stdio.h>

#include<string.h>

int main(void)

{

	char s[10];

	int i,temp,n;

	scanf("%s",s);

	n=strlen(s);

	if(n%2==0)

	{

		for(i=0;i<n;i+=2)

		{

			temp=s[i];

			s[i]=s[i+1];

			s[i+1]=temp;

		}

		printf("%s",s);

	}

	else

	{

		for(i=0;i<n-1;i+=2)

		{

			temp=s[i];

			s[i]=s[i+1];

			s[i+1]=temp;

		}

		printf("%s",s);

		

	}





return 0;

}
