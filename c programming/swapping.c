#include <stdio.h>

int main(){
     int a = 5 ;
     int b = 10 ;
     int c ;
    
    //Before swapping
    
    printf("%d\n",a,b);

    //Swapping the numbers
    c=a;
    a=b;
    b=c;
   
   //After Swapping
   printf("%d\t%d",a,b);

   return 0;
}

