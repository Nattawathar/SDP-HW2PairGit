#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int num1,num2,num3,lotto,lotto1,lotto2;
   time_t t;
   num1 = rand() % 9;
   num2 = rand() % 9;
   num3 = rand() % 9;
   /* Intializes random number generator */
   srand((unsigned) time(&t));
   printf("%d\n", rand() % 999999);
   
   
   printf("lotto3 :  ");
   scanf("%d", &lotto);
   printf("%d\n",(lotto*10)+num1);
   
   
   printf("lotto4 :  ");
   scanf("%d", &lotto1);
   printf("%d\n",(lotto1*10)+num2);
   
   printf("lotto1 :  ");
   scanf("%d", &lotto2);
   printf("%d\n",(lotto2*10)+num3);
   
   return(0);
}