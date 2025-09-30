#include <stdio.h>
#include <string.h>

int main(){
  int i =0;
 char nom[100];
    printf("entrer text : ");
           fgets(nom,100,stdin);
    
    while(nom[i] != '\0' && nom[i] != '\n'){
      i++;
    }

     printf("%d\n",i);
}