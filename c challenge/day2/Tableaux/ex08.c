#include <stdio.h>

int main(){
   int a , result=0;

   printf("3adad l2ar9am : ");
   scanf("%d",&a);
   int num[a];                              

       for(int i = 0; i < a; i++){
           printf("enter num pour tableaux : ");
           scanf("%d", &num[i]);

       } 
             for(int i =0 ; i < a  ; i++){
                   
                       for(int x = i + 1 ; x < a ; x++){

                             result = num[i];
                             num[i] = num[x];
                             num[x] = result;

                       }
                         

             }
                printf("num = ");
           for(int i = 0 ; i < a; i++){
        
           printf("%d",num[i]);
      }


}