#include <stdio.h>

int main()
{
    long long int i,fact=1,n;
    scanf("%Ld",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("%Ld",fact);
    return 0;
}
