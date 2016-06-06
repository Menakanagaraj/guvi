#include <stdio.h>
#include<string.h>
int main()
{
   char s[1000],i,n,count=0;
   gets(s);
   n=strlen(s);
   for(i=0;i<=n;i++)
   {
   if(s[i]==' ')
   count++;
   }
   printf("%d",count+1);
    return 0;
}
