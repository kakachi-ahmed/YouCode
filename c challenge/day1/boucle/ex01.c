#include <stdio.h>

int main(){

  int num , a = 1 ;

      printf("enter num : ");
    scanf("%d",&num);

      for(int i = num;i>0;i--){

            a = a *  i;
      }
           printf("%d\n",a);
}