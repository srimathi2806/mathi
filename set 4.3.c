#include <stdio.h>
#include <string.h>
 
void main()
{
    char a[200];
    int count = 0, i;
    printf("enter the string\n");
    scanf("%[^\n]s", a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
            count++;    
    }
    printf("number of space string are: %d\n", count );
}
