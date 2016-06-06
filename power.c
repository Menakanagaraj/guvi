#include <stdio.h>

int main()
{
   long long int i,base,n,sum=1;
   scanf("%Ld %Ld",&base,&n);
   while(n>0)
   {
       sum=sum*base;
       n--;
   }
   printf("%Ld",sum);
    return 0;
}
