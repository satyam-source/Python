#include<stdio.h>

int main(){
    int Hindi,English,Physics,Chemistry,Maths;

    printf("Enter the Hindi marks ");
    scanf("%d",&Hindi);
    printf("Enter the English marks ");
    scanf("%d",&English);
    printf("Enter the Physics marks ");
    scanf("%d",&Physics);
    printf("Enter the Chemistry marks ");
    scanf("%d",&Chemistry);
    printf("Enter the Maths marks ");
    scanf("%d",&Maths);

    int total=Hindi+English+Physics+Chemistry+Maths;
    float per=total/5;

printf("total marks =%d\n",total);
printf("Percentage=%f\n",per);

return 0;
  
}