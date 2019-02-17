int main()
{
  char s[100],s1[100];
  int n,i=0,j=0;
  scanf("%s",s);
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      s1[j]=s[i];
      j++;
  }
  printf("%s",s1);
    return 0;
}
