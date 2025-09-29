#include <stdio.h>

int main(){
   int a , b;

   printf("3adad ar9am tablo 1  : ");
   scanf("%d",&a);

   int num1[a]; 
       for(int i = 0; i < a; i++){
           printf("enter num pour tableaux 1: ");
           scanf("%d", &num1[i]);

       } 
       printf("3adad ar9am tablo 2  : ");
   scanf("%d",&b);

   int num2[b]; 
       for(int i = 0; i < b; i++){
           printf("enter num pour tableaux : ");
           scanf("%d", &num2[i]);

       } 
    int final[a+b];
                    
             for(int i =0 ; i < a  ; i++){
                   
                            final[i] = num1[i];

                       }
        for(int i = 0 ; i < a+b ; i++){
                   
            final[i+a]=num2[i];

                       }  

         printf("num 1 = ");
           for(int i = 0 ; i < a; i++){
        
           printf("%d",num1[i]);
      }
                   printf("\nnum 2 = ");
           for(int i = 0 ; i < b; i++){
        
           printf("%d",num2[i]);
      }
               printf("\nfinal = ");
           for(int i = 0 ; i < a+b; i++){
        
           printf("%d",final[i]);
      }
           


}