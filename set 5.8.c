
#include <stdio.h>

int main() 
{
 int n,a[1000],i,sum=0,AVG;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<=n;i++)
 {
     sum=sum+i;
 }
 AVG=sum/n;
 printf("%d\t%d",AVG,sum);

	return 0;
}
