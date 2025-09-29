#include <stdio.h>
#include <string.h>

int main(){

 char nom[20];
    printf("entrer ton nom : ");
    scanf("%s",nom);
    
    
     for (int i = 0; i <nom['\0'] ; i++)
     {
        
        printf("%d",i);
     }
     
}