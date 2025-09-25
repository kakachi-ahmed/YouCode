#include <stdio.h>

int main(){

   float montant, taux,paiement;
   printf("Entrez le montant du pret : ");
   scanf("%f",&montant);
   printf("Entrez le taux d'intérêt : ");
   scanf("%f",&taux);
   printf("Entrez le paiement mensuel : ");
   scanf("%f",&paiement);


   float faida = ((taux / 100)/12)*montant;
   float mois1 = (montant - paiement) + faida;
   float faida2 = ((taux / 100)/12)*mois1;
   float mois2 = (mois1 - paiement) + faida2;
   float faida3 = ((taux / 100)/12)*mois2;
   float mois3 = (mois2 - paiement) + faida3;
   printf("Solde restant après le premier paiement : %f", mois1);
printf("Solde restant après le deuxième paiement : %f", mois2);
printf("Solde restant après le troisième paiement : %f", mois3);

   

    return 0;
}
