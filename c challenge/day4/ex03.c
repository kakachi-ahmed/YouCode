#include <stdio.h>

int main(){
    
    int a = 5;
   char sel[5]={5,3,8,1,99};

         printf("sel befor sort : ");

      for(int i = 0; i < a ; i++){
              
          printf("%d - ", sel[i]);
      }
      
       for(int i = 0 ; i < a-1 ; i++){

                int kbir = i;
                                      
                  for(int j = i + 1 ; j < a ; j++){
                           if(sel[j] > sel[kbir])
                                kbir = j;
                  }
                  int tmp = sel[kbir];
                      sel[kbir] = sel[i] ;
                          sel[i] = tmp;
       }
   
        printf("sel after sort : ");

      for(int i = 0; i < a ; i++){
              
          printf("%d - ", sel[i]);

      }


}