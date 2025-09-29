#include <stdio.h>

int main(){

  int base , exposant , result = 1;

      printf("enter base : ");
    scanf("%d",&base);
      printf("enter exposant : ");
    scanf("%d",&exposant);

      for(int i = 1;i <= exposant;i++){
           
             result = result * base;
      }
            printf("%d\n",result);
}