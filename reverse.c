#include <stdio.h>
#include<string.h>
int main()
{
   int i,n,sum=0,r=0;
   scanf("%d",&n);
   while(n>0)
   {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
   }
   printf("%d",sum);
    return 0;
}
