#include<stdio.h>
	void main()
	{
	int i,j=0,b;
	char a[0];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	b=i;
	for(i=0;i<b;i++)
	{
	if(((a[i]>=48)&&(a[i]<=57))||(a[i]=='.'))
	{
	j=1;
	}
	else
	{
	j=0;
	break;
	}
	}
	if(j==1)
	{
	printf("numeric");
	}
	else
	{
	printf("non numeric");
	}
	getch();
	}
