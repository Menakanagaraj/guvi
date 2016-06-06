#include <stdio.h>
#include<math.h>
int main()
{
   int i,n,sum=0,r,count=0,temp=0;
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       n=n/10;
       ++count;
   }
   n=temp;
   while(n>0)
   {
       r=n%10;
       n=n/10;
       sum=sum+pow(r,count);
   }
   if(sum==temp)
   printf("Armstrong number");
   else
   printf("Not a Armstrong number");
    return 0;
}
