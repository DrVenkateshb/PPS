#include <stdio.h>

int add(int a, int b){
    int z;

   a=a+5;
   printf("The value of A in add function=%d\n",a);
   z=a+b;

   return z;
}

int main(){

   int a = 10, b = 20;
   
   int c = add(a, b);
     printf("The value of A in main after add function=%d\n",a);

   printf("Addition: %d", c);
}