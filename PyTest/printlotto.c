#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int num;
   time_t t;
   num = rand() % 99999;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   
   printf("%d\n",num*10+9);
   
   return(0);
}