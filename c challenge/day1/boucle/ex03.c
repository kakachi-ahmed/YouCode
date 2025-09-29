#include <stdio.h>

int main(){

  int num ;

      printf("enter num : ");
    scanf("%d",&num);

      for(int i = 1;i <= num * 2;i++){

          if(i % 2 != 0)
          printf("%d\n",i);
      }
           
}