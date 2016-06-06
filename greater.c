#include <stdio.h>

int main()
{
   int num1,num2,num3;
   scanf("%d%d%d",&num1,&num2,&num3);
   if(num1>num2&&num1>num3)
   printf("The number1 is Greater");
   else if(num2>num1&&num2>num3)
   printf("The number2 is Greater");
   else
   printf("The number3 is Greater");
    return 0;
}
