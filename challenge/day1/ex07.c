#include <stdio.h>

int main(){

   int montant;
   printf("Entrez un montant en dollars : ");
   scanf("%d",&montant);
   
    int RST1,RST2,RST3;
    int P20,P10,P5,P1;
      
     RST1 = montant%20;
      RST2 = RST1%10;
       RST3 = RST2%5;

        P20 = montant/20;
        P10 = RST1/10;
        P5 = RST2/5;
        P1 = RST3;
        printf("Billets de 20$ : %d\n", P20);
        printf("Billets de 10$ : %d\n", P10);
        printf("Billets de 5$ : %d\n", P5);
        printf("Billets de 1$ : %d\n", P1);
        


    return 0;
}