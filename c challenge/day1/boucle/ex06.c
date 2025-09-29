#include <stdio.h>

int main(){

  int num  ;

      printf("enter num : ");
    scanf("%d",&num);

      for(int i = 1 ; i <= 100; i++){
             printf("%d",num % 10);
             num = num / 10;
               if(num < 10){
                break;
               }
      }
           printf("%d",num);
}