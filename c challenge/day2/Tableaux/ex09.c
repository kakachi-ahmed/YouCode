#include <stdio.h>

int main(){
   int a , result;

   printf("3adad l2ar9am : ");
   scanf("%d",&a);

   int num[a]; 
       for(int i = 0; i < a; i++){
           printf("enter num pour tableaux : ");
           scanf("%d", &num[i]);

       } 
           printf("3lach kat9alab : ");
               scanf("%d",&result);

             for(int i =0 ; i < a  ; i++){
                   
                           if(num[i] == result){
                            printf("l3adad %d kayn f num\n",result);
                            return 0;
                           }

                       }
                         

                   printf("l3adad %d makaynch fnum\n",result);


}