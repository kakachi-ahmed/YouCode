#include "variable.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void ajouter_davion(){
     printf("Combien voulez-vous remplir lavion : ");
     scanf("%d",&add);
   for(int i = 0 ; i < add  ; i++){
 printf("enter modele davion : ");
    scanf("%s",modele[total]);
 printf("enter capacite davion : ");
    scanf("%d",&capacite[total]); 
 printf("enter statut davion : ");
    scanf("%s",statut[total]);   
    idAavion[total] = total + 1;
  total++;
}}



void afficher_davion(){

        for(int i = 0; i<total; i++){
      
      printf("|- idAvion : %d | -modele : %s | -capacite : %d | -statut : %s |\n",idAavion[i],modele[i],capacite[i],statut[i]);
}}

void cherche_davion(){
           check = false;
          printf("Méthode de recherche : \n 1-par modele | 2-par id : ");
          scanf("%d",&cherche);
       if(cherche == 1){
     printf("avion modele : ");
     scanf("%s",modelecherche);
     for(int i = 0; i < total;i++){
        if(strcmp(modele[i] ,modelecherche)== 0){
            printf("-idAvion : %d | modele : %s | capacite : %d | statut : %s \n",idAavion[i],modele[i],capacite[i],statut[i]);
            check = true;
     }}
        }else if(cherche == 2){
                printf("avion id : ");
                  scanf("%d",&idcherche);            
             for(int i =0 ; i < total ; i++){
                   if(idcherche == idAavion[i]){
                        printf("-idAvion : %d | -modele : %s | -capacite : %d | -statut : %s \n",idAavion[i],modele[i],capacite[i],statut[i]);
                        check = true;
             }}}else{
             
                   printf("le choix n'existe pas");
                   
             }
             
                if(!check)
            printf("rien avion se nom\n");
          
}

void supprimer_davion(){
   check = false;
    printf("avion id : ");
     scanf("%d",&idcherche);
       for(int i = 0; i < total;i++){
          if(idcherche == idAavion[i]){
             for(int j = i ; j<total-1;j++){
                idAavion[j] = idAavion[j+1];
                strcpy(modele[j], modele[j+1]);
                capacite[j] = capacite[j+1];
                strcpy(statut[j], statut[j+1]);
          }
            total--;  
            check = true;
            break;
        }
    }

    if (!check)
        printf("Rien avion avec ce nom/id\n");
}
void Modifier_davion(){
    check = false;
     printf("livre id : ");
      scanf("%d",&idcherche);
       for(int i = 0; i < total;i++){
          if(idcherche == idAavion[i]){
                  printf("Que voulez-vous changer : \n 1-modele | 2-capacite | 3- statut : ");
                  scanf("%d",&modifier);
                if(modifier == 1){
                    printf("enter le modifier de modele: ");
                    scanf("%s",nvmodele);
                      strcpy(modele[i],nvmodele);
                      check = true;
                }else if(modifier == 2){
                      printf("enter le modifier de capacite : ");
                    scanf("%d",&nvcapacite);
                    capacite[i] = nvcapacite;
                    check = true;
                }else if(modifier == 3){
  
                printf("enter le modifier de statut: ");
                    scanf("%s",nvstatut);
                      strcpy(statut[i],nvstatut);
                       check = true;
                }else{
                        printf("le choix n'existe pas");
                }
                 }
                
     }
                    if(!check)
            printf("rien avion se nom");
               
    } 

void tbdil(int i,int j){

   idswap=idAavion[i];
    idAavion[i]=idAavion[j];
      idAavion[j]=idswap;
        capswap=capacite[i];
         capacite[i]=capacite[j];
          capacite[j]=capswap;
         strcpy(mdlswap,modele[i]);
            strcpy(modele[i], modele[j]);
           strcpy(modele[j],mdlswap);
      strcpy(sttswap, statut[i]);
         strcpy(statut[i], statut[j]);
            strcpy(statut[j],sttswap);
}

void trier_avions(){
       printf("Trier par : \n 1-capacite 2-modele: ");
          scanf("%d", &swpchoix);
              for(int i = 0; i<total - 1;i++) {
                   for(int j = i + 1; j<total;j++){
                     if(swpchoix == 1) {
                        if(capacite[i]>capacite[j]){
                          tbdil(i,j);
             }
            }else if(swpchoix == 2){
                   
                if(strcmp(modele[i],modele[j]) > 0){
                    tbdil(i,j);
                        }
}}
               afficher_davion();
}
}


    void swi_tch(){
do{
       
        printf(" \n    *** MENU ***    \n");
         printf("1. Ajouter un avion \n");
          printf("2. Modifier un avion\n");
            printf("3. Supprimer un avion\n");
              printf("4. Afficher la liste des avions.\n");
                printf("5. Rechercher un avion\n");
                  printf("6. Trier les avions (\n");
                    printf("0. quitter\n");
        
        printf("entrer votre choix : ");
        scanf("%d",&choix);
        switch (choix){
        
            case 1 : printf("\n===Ajouter un avion===\n"); 
               ajouter_davion(); 
                  break;
            case 2 : printf("\n===Modifier un avion===\n"); 
               Modifier_davion(); 
                  break;
            case 3 : printf("\n===Supprimer un avion===\n"); 
               supprimer_davion();
                  break;
            case 4 : printf("\n===Afficher la liste des avions ==\n"); 
               afficher_davion();
                  break;
            case 5 : printf("\n===Rechercher un avion==\n"); 
               cherche_davion();
                  break;
            case 6 : printf("\n===Trier les avions==\n"); 
               trier_avions();
                  break;
            case 0 : printf("au revoir\n");
                  break;
            default:
                     printf("introuvable dans ce menu\n"); 
                  break;

        }

          
}while(choix != 0);
}