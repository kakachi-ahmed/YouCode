#include <stdio.h>
#include <string.h>

int main(){

 char nom[20];
    printf("entrer ton nom : ");
    scanf("%s",nom);
    
    int a = strlen(nom);
     for (int i = 0; i < a; i++)
     {
        
        printf("%c",nom[i]);
     }
     
}