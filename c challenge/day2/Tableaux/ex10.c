#include <stdio.h>

int main(){
   int a , result , jdid;

   printf("3adad l2ar9am : ");
   scanf("%d",&a);

   int num[a]; 
       for(int i = 0; i < a; i++){
           printf("enter num pour tableaux : ");
           scanf("%d", &num[i]);

       } 
           printf("chno bagho tbdl : ");
               scanf("%d",&result);
        printf("bach baghi tbdl : ");
           scanf("%d",&jdid);

             for(int i =0 ; i < a  ; i++){
                   
                           if(num[i] == result)
                                num[i]=jdid;
        
                          

                       }
                         

         printf("num = ");
           for(int i = 0 ; i < a; i++){
        
           printf("%d",num[i]);
      }


}