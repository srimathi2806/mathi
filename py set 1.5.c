nt main()
{
   char s[100];
   int i,a=0;
   scanf("%s",&s);
   for(i=0;s[i]!='\0';i++)
   {
       switch(s[i])
       {
           case 'i': a=a+1;
                        if(s[i+1]=='v' || s[i+1]=='x')
                        {
                            a=a-2;
                        }
                        break;
            case 'v': a=a+5;
                        break;
            case 'x': a=a+10;
                        break;

            default: break;               
       }
   }
printf("%d",a);
    return 0;
}
