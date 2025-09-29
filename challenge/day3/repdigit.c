#include <stdio.h>
#include <stdbool.h>

int main(void) {
        bool digit_seen[10] = {false};
         int digit;
         long n;
         bool digit_repet[10];
        printf("Entrez un nombre : ");
         scanf("%ld", &n);

        while (n > 0) {
           digit = n % 10;
             if (digit_seen[digit])
               digit_repet[digit] = digit_seen[digit];
            digit_seen[digit] = true;
                   n /= 10;
}


return 0;

}