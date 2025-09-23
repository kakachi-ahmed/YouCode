#include <stdio.h>

int main(){

   int x;
   printf("entrer num x: ");
   scanf("%d",&x);
   

   int final = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
   printf("%d",final);

    return 0;
}