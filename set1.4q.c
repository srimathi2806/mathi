#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A'&& c<='Z'))
    printf("alphapet");
    else
    printf("not alphabet");
    return 0;
}
   
