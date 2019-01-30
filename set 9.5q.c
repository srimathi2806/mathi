#include <stdio.h>

int main()
{
    char ch[120],b[120],c[120],i=0,j=0,k=0;
    scanf("%s",ch);
    while (ch[i] != '\0')
    {
        if (i % 2 == 0)
        {
         b[j] = ch[i];
         j++;
        } 
        else 
        {
         
          c[k]=ch[i];
          k++;
        }
        i++;
     }
    printf("the odd position is=%s\n",b);
    printf("the even position is =%s\n",c);
    
    return 0;
}
