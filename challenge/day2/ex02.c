#include <stdio.h>

int main(){
     int a ,b,c;
     printf("Entrez un nombre a deux chiffres : ");
     scanf("%d",&a);

     b = a / 10;
     c = a % 10;
       
          printf("Le nombre inversé est : %d%d", c , b);
 
}