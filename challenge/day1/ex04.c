#include <stdio.h>

int main(){

   float m;
   float vcc;
   printf("d'entrer un montant en dollars et en cents: ");
   scanf("%f",&m);

 vcc=m*(1+5.0/100.0); 
  printf("le montant Avec taxe = %f",vcc);

    return 0;
}