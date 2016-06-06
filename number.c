#include <stdio.h>
 int main(void) {
    int num;
    scanf("%d",&num);
    if(num>0)
    printf("The number is Positive");
    else if(num<0)
    printf("The number is Negative");
    else
    printf("The number is zero");
    return 0;
}
