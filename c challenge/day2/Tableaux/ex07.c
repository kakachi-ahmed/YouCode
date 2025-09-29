#include <stdio.h>

int main(){
   int a ;

   printf("3adad l2ar9am : ");
   scanf("%d",&a);
   int num[a];   
   int num1[a] ;                        

       for(int i = 0; i < a; i++){
           printf("enter num pour tableaux : ");
           scanf("%d", &num[i]);

       } 
             for(int i =0 ; i < a ; i++){
                    
                    num1[i] = num[i];

             }

           for(int i = 0 ; i < a; i++){
        
           printf("num[%d]= %d\n",i,num[i]);
           printf("num1[%d] = %d\n",i,num1[i]);
      }


}