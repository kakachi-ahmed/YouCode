#include <stdio.h>
#include <ctype.h>

int main(){
  int i =0 ,voy=0 ,con=0;
 char nom[100];
    printf("entrer text : ");
           fgets(nom,100,stdin);
         
    while(nom[i] != '\0'){
         char c = tolower(nom[i]);
          if(c>='a' && c<='z'){
              if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
                   voy++;
              else 
                   con++;
          }
           
      i++;
    }

     printf("voy = %d\ncon = %d\n",voy,con);
}