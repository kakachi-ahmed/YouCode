#include <stdio.h>
#include <stdbool.h>

int main(void) {
        bool digit_seen[10] = {false};
         int digit;
         long n ;
         int xr[10];
         int rt = 0;
         int check=1;
         printf("Entrez un nombre : ");
         scanf("%ld", &n);
         printf("Chiffre(s) repete(s) : ");
        while (n > 0) {
           digit = n % 10;
             if (digit_seen[digit]){
               xr[rt] = n % 10;
               rt++;}
            
            digit_seen[digit] = true;
                   n /= 10;         
}
    for(int j= 0; j < rt ; j++){
          if(xr[j] != xr[check])
              printf("%d ",xr[j]);
          else{
          printf("%d ",xr[j]);
        break;
    }
}

return 0;

}