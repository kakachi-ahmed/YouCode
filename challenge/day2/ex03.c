#include <stdio.h>

int main(){
  
      int a,b,c;
      int x,y,z;
      printf("Entrez la premiere date (mm/jj/aa) : ");
      scanf("%d/%d/%d",&a,&b,&c);
      printf("Entrez la deuxieme date (mm/jj/aa) : ");
      scanf("%d/%d/%d",&x,&y,&z);
      
      if(c > z){

            printf("%d/%d/%d est plus tot que %d/%d/%d",x,y,z,a,b,c);
      }else if(c < z){

            printf("%d/%d/%d est plus tot que %d/%d/%d",a,b,c,x,y,z);
      }
      else{
               
             if(b > y){

              printf("%d/%d/%d est plus tot que %d/%d/%d",x,y,z,a,b,c);

      }else if(b < y){

             printf("%d/%d/%d est plus tot que %d/%d/%d",a,b,c,x,y,z);

      }
      else{
              
                  if(a > x){

            printf("%d/%d/%d est plus tot que %d/%d/%d",x,y,z,a,b,c);
      }else if(a < x){

            printf("%d/%d/%d est plus tot que %d/%d/%d",a,b,c,x,y,z);
      }
        


}
}  
         




}