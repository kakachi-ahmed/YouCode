#include <stdio.h>

void compar(int a,int b);

int main(){

    compar(4,5);



}

void compar(int a , int b){

         if(a > b)
            printf("%d\n",a);
         else
            printf("%d\n",b);

}