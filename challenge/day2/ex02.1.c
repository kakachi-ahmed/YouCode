#include <stdio.h>
 
int main() {
    
   int h,m;
   printf("Entrez une heure (24h) : ");
   scanf("%d:%d",&h,&m);
   int time = h*60 + m;
         int t1=8*60;
         int t2=9*60+43;
         int t3=11*60+19;
         int t4=12*60+47;
         int t5=14*60;
         int t6=15*60+45;
         int t7=19*60;
         int t8=21*60+45;

         if(time >= t1 && time < t2){
             printf("L'heure de départ la plus proche est 8h00 a.m., arrivant à 10h16 a.m.");
         }else if(time >= t2 && time < t3){
             printf("L'heure de départ la plus proche est 9h43 a.m., arrivant à 11h52 a.m.");
         }else if(time >= t3 && time < t4){
             printf("L'heure de départ la plus proche est 11h19 a.m., arrivant à 1h31 p.m.");
         }else if(time >= t4 && time < t5){
             printf("L'heure de départ la plus proche est 12h47 p.m., arrivant à 3h00 p.m.");
         }else if(time >= t5 && time < t6){
             printf("L'heure de départ la plus proche est 2h00 p.m., arrivant à 4h08 p.m.");
         }else if(time >= t6 && time < t7){
             printf("L'heure de départ la plus proche est 3h45 p.m., arrivant à 5h55 p.m.");
         }else if(time >= t7 && time < t8){
             printf("L'heure de départ la plus proche est 7h00 p.m., arrivant à 9h20 p.m.");
         }else{
             printf("L'heure de départ la plus proche est 9h45 p.m., arrivant à 11h58 p.m.");
         }
    return 0;
}
