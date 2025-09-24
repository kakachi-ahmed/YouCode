#include <stdio.h>

int main(){
           

      int m , n , x = 0, i;
      printf("Entrez deux entiers : ");
      scanf("%d %d",&m,&n);
    for(i = 1; n != 0 && m != 0 ; ++i ){
      if(n != 0 && m != 0){

        x = m % n;
        m = n;
        n = x;


      }
    }
        printf("%d",i);
}