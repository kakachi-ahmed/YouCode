#include <stdio.h>

int main(){

   int x,result;
   printf("entrer num x: ");
   scanf("%d",&x);
   
   result = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
   printf("%d",result);

    return 0;
}