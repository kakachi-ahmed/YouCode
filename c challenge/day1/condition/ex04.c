#include <stdio.h>
#include <stdbool.h>

int main(){

  char littre ;
  int a = 0;

      printf("enter littre : ");
    scanf("%c",&littre);



         if(littre >= 65 && littre <= 90 ){
            printf("mn lhorof\n");
             a = 1;
         }else if(littre <= 122 && littre >= 97){
            printf("mn lhorof\n");
             a = 2;
         }else{
        printf("machi mn lhorof\n");}


               if(a == 1){
          printf("kbir\n");}
        else if(a == 2){
            printf("sghir\n");}
    }


