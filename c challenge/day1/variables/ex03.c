#include <stdio.h>

int main(){

 int c;
  
     printf("dkhl darajat lharara %% : ");
     scanf("%d",&c);

     if( c < 0){
          printf("SOLIDE");
     }else if(0 <= c && c < 100){
        printf("LIQUIDE");
     }else{
        printf("GAZ");
     }


}