#include <stdio.h>

int main() {
         
         int a,b,c,d,e;
         printf("Entrez l'ISBN : ");
         scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
         
         printf("Préfixe GS1 : %d\n",a);
         printf("Identifiant de groupe : %d\n",b);
         printf("Code de l'éditeur : %d\n",c);
         printf("Numéro d'article : %d\n",d);
         printf("Chiffre de contrôle : %d\n",e);

    return 0;
}
