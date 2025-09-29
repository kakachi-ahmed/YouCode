#include <stdio.h>
#include <stdbool.h>
bool compar(int a);

int main(){

    if(compar(5))
       printf("zawji");
     else 
     printf("fardi");



}

bool compar(int a){

         if(a % 2 != 0)
            return 0;
         else
            return 1 ;
}