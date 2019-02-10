#include <stdio.h>
	
	int main()
	{
	   char a[20];
	   int i,flag=0,count=0;
	   scanf("%s",a);
	   for(i=0;a[i]!='\0';i++)
	   {
	       count++;
	   }
	   for(i=0;a[i]!='\0';i++)
	   {
	       if(((a[i]<=0)&&(a[i]>=0))||(a[i]=='.'))
	       {
	           flag++;
	       }
	       
	   }
	   if(flag==count)
	   {
	       printf("yes");
	   }
	   else
	   {
	       printf("Not");
	   }
	
	    return 0;
	}
