#include <stdio.h>

int main(){

  int num , i  ;

      printf("enter num : ");
    scanf("%d",&num);

      for(i  = 1 ; i <= 100; i++){
             num = num / 10;
               if(num < 10){
                i++;
                break;
               }
      }
           printf("%d",i);
}