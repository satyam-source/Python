#include <stdio.h>

int main(){

   int num1=10,num2=8;
   printf("Enter the First numbers ");
   scanf("%d",&num1);
   printf("Enter the second number ");
   scanf("%d",&num2);

   int sum=num1+num2;
   int diffrence=num1-num2;
   int multiply=num1*num2;
   int division=num1/num2;
   int modulas=num1%num2;

   printf("the addtion is %d\n",sum);
   printf("the subtraction is %d\n",diffrence);
   printf("the multiplication is %d\n",multiply);
   printf("the division is %d\n",division);
   printf("the modulas is %d\n",modulas);

    return 0;

}