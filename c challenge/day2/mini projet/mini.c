#include <stdio.h>
#include <stdbool.h>
#include <string.h>


char titre[100][50];
char auteur[100][50];
int prix[100];
int quantite[100];
char cherche[50];
int nvquantite;
int total = 0;
bool check = false;
int choix;
int stock = 0;

void ajouter_livre(){


  printf("enter titre du livre :");
    scanf("%s",titre[total]);
  printf("enter auteur du livre :");
    scanf("%s",auteur[total]);   
  printf("enter prix du livre :");
    scanf("%d",&prix[total]); 
  printf("enter quantete du livre :");
    scanf("%d",&quantite[total]);
  total++;
}
void afficher_livre(){
        for(int i = 0; i<total; i++){
      
         printf("-titre : %s | -auteur : %s | -prix : %d | -quantite : %d\n",titre[i],auteur[i],prix[i],quantite[i]);
}
}
void cherche_livre(){
          
     printf("livre titre: ");
     scanf("%s",cherche);
     for(int i = 0; i < total;i++){
        if(strcmp(titre[i] ,cherche)== 0){
            printf("-titre : %s | -auteur : %s | -prix : %d | -quantite : %d\n",titre[i],auteur[i],prix[i],quantite[i]);
            check = true;
     }}
          if(!check)
            printf("rien livre se nom\n");
        
}
void quantite_livre(){

    check = false;
    printf("livre titre: ");
     scanf("%s",cherche);
     for(int i = 0; i < total;i++){
        if(strcmp(titre[i],cherche)==0){
              printf("le quantite maintenant: %d\n", quantite[i]);
              printf("enter a nouvelle quantite : ");
              scanf("%d",&nvquantite);
              quantite[i]= nvquantite;
                check = true;
     }}
          if(!check)
            printf("rien livre se nom\n");
}
void supprimer_livre(){

      check = false;
    printf("livre titre: ");
     scanf("%s",cherche);
       for(int i = 0; i < total;i++){
          if(strcmp(titre[i],cherche)==0){
             for(int j = i ; j<total-1;j++){
                strcpy(titre[j], titre[j+1]);
                strcpy(auteur[j], auteur[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
              
                check = true;
                 }
                
     }} 
    
          if(!check)
            printf("rien livre se nom");
                 total--;
}

void total_stock(){

      for(int i = 0; i < total ; i++){

          stock += quantite[i];

      }
       
     printf("le nombre total de livres en stock : %d",stock);
          
}

int main(){
    

do{
       
        printf(" \n    *** MENU ***    \n");
         printf("1. Ajouter un Livre au Stock\n");
          printf("2. Afficher Tous les Livres Disponibles\n");
            printf("3. Rechercher un livre par son titre\n");
              printf("4. Mettre à Jour la Quantité d'un Livre\n");
                printf("5. Supprimer un Livre du Stock\n");
                  printf("6. Afficher le Nombre Total de Livres en Stock\n");
                    printf("0. quitter\n");
        
        printf("entrer votre choix : ");
        scanf("%d",&choix);

        switch (choix){
        
            case 1 : printf("\n===ajouter livre===\n"); ajouter_livre(); break;
            case 2 : printf("\n===les Livres Disponibles===\n"); afficher_livre(); break;
            case 3 : printf("\n===cherche livre===\n"); cherche_livre(); break;
            case 4 : printf("\n===Mettre à Jour la Quantite ==\n"); quantite_livre(); break;
            case 5 : printf("\n===supprimer livre ==\n"); supprimer_livre(); break;
            case 6 : printf("\n===total stock ==\n"); total_stock(); break;
            case 0 : printf("au revoir\n");break;
            default:
                     printf("introuvable dans ce menu\n");

        }

          
}while(choix != 0);

}