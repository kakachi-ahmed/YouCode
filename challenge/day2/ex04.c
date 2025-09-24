#include <stdio.h>

int main(){
     int note,a;
     
    printf("Entrez une note numerique : ");
    scanf("%d",&note);

    a = note / 10;
        if (note >= 0 && note <= 100)
        {
        
        
    switch(a){
           
        case 10 :

            printf("A");
            break;
        case 9 :

            printf("A");
            break;
        case 8 :

            printf("B");
            break;
        case 7 :

            printf("C");
            break;
        case 6 :

            printf("D");
            break;
        default:
            printf("F");


    }

        }else{

            printf("si la note est superieure a 100 ou inferieure a 0.");
        }
    
 
}