#include <stdio.h>
int main()

{
    char firstString[100],secondString[100];
   int i,j;
     printf("Enter your first string : ");
      gets(firstString);
    printf("Enter your second string : ");
    gets(secondString);
  
   i = 0;
   while(firstString[i] != '\0'){
     i++;
   }
   j = 0;
   while(secondString[j] != '\0')
   {
     firstString[i] = secondString[j];
     i++;
     j++;
   }
   firstString[i] = '\0';
   printf("Final String : %s\n",firstString);
   return 0;
}
