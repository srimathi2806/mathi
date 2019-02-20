include <stdio.h>

int main()
{
    char s[50],s1[50];
	int i,j,k=1,m,n,len=0,len2=0;
	scanf("%s %s",s,s1);
	len=strlen(s);
	len2=strlen(s1);
	if(len==len2)
	{
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len2;j++)
		{
			m=s[i]-s[j];
			n=s1[i]-s1[j];
			if(m==n)
			{
			    k=0;
			}
			else
			{
				k=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(k==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

     return 0;
}
