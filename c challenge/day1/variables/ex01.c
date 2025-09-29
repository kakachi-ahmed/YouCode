#include <stdio.h>

int main(){

 char nom[20];
 char prenom[20];
 int age;
 char email[20];

 printf("enter nom : ");
 scanf("%s",nom);
  printf("enter prenom : ");
 scanf("%s",prenom);
  printf("enter age : ");
 scanf("%d",&age);
  printf("enter email : ");
 scanf("%s",email);

 printf("le nom est : %s\n",nom);
  printf("le nom est : %s\n",prenom);
   printf("le nom est : %d\n",age);
    printf("le nom est : %s\n",email);

}