#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
   int i;
   srand(time(0));
   for(i=0;i<100;i++) printf(" %d",rand()%100+1);
   putchar('\n');
   return 0;
}