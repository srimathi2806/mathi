#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("large valu is=%d",a);
    else if(b>c)
    printf("large value is=%d",b);
    else
    printf("large value is=%d",c);
    return 0;

}
    
