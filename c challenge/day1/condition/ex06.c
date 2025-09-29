#include <stdio.h>

int main(){

    int a,b,c,x,y,z;

        printf("entrer time 1 format hh:mm:ss et 24h : ");
        scanf("%d:%d:%d: ", &a,&b,&c);

        printf("entrer time 2 format hh:mm:ss et 24h : ");
        scanf("%d:%d:%d: ", &x,&y,&z);

         int date1 = a * 100 + b * 10 + c * 2;
         int date2 = x * 100 + y * 10 + c * 2;


         if(date1 == date2){
             printf("Il s'agit du même instant\n");
         }else if(date1 < date2){
              printf("Le premier instant vient avant le deuxième\n ");
         }else{
                printf("Le deuxième instant vient avant le  premier\n");
         }




       
}