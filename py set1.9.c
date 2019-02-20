#include <stdio.h>

int main(void) 
{
	int l,r,i,j,c=0,f=1;
	scanf("%d",&l);
	scanf(" %d",&r);
	if(l==2)
	{
		c++;
	}
	for(i=l;i<=r;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=0;
				break;
				
			}
			
		}
			if(f==1)
			{
				c=c+1;
			}
		
		
	}

	printf("\n%d",c);
	return 0;
}
