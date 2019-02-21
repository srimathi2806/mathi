#include<stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    char s[]="kabali";
    int i,j,temp=0,n,n1,k=0,l,c=0;
    n=strlen(s);
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
            t=s[i];
            str[i]=s[j];
            s[j]=t;
            }
        }
    }
   while(k<n1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(n==l)
       {
           for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                       te=a[i];
                       a[i]=a[j];
                       a[j]=t;
                   }
               }
           }
           if(strcmp(s,a)==0)
           {
               c++;
           }
       }k++;
   }
   printf("%d",c);
	return 0;
}
