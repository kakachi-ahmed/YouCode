#include <stdio.h>
#include <string.h>


typedef struct{
    int jour;
    int mois;
    int annee;
    char moislittre[20];
}date;
date scan(){
    date d;
     printf("enter date forma jj/mm/aa: ");
     scanf("%d/%d/%d",&d.jour,&d.mois,&d.annee);
       return d;
}
date swi_tch(date d) {

    switch(d.mois) {
        case 1: strcpy(d.moislittre, "janvier"); break;
        case 2: strcpy(d.moislittre, "février"); break;
        case 3: strcpy(d.moislittre, "mars"); break;
        case 4: strcpy(d.moislittre, "avril"); break;
        case 5: strcpy(d.moislittre, "mai"); break;
        case 6: strcpy(d.moislittre, "juin"); break;
        case 7: strcpy(d.moislittre, "juillet"); break;
        case 8: strcpy(d.moislittre, "août"); break;
        case 9: strcpy(d.moislittre, "septembre"); break;
        case 10: strcpy(d.moislittre, "octobre"); break;
        case 11: strcpy(d.moislittre, "novembre"); break;
        case 12: strcpy(d.moislittre, "décembre"); break;
        default: strcpy(d.moislittre, "Invalide"); break;
    }
         return d;
}
int main(){

         date d;
     d = scan();
     d = swi_tch(d);

      printf("%s/%d/%d",d.moislittre,d.jour,d.annee);
  
}