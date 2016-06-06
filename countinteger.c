#include <stdio.h>

int main()
{
    int i,n,count=0,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        sum=sum+i;
        count++;
    }
    printf("%d",count);
    
    return 0;
}
