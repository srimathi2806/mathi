#include<stdio.h>
int main()
{
    int num,num1;
    scanf("%d",&num);
    num1=num+1;
    while(num1!=0)
    {
        if(num1%10==0)
        {
            printf("%d",num1);
            break;
        }
        num1++;
    }
    return 0;
}
