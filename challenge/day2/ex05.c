#include <stdio.h>


int main() {
    int n, m;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &n, &m);

    if (n == 0) {
        printf("le GCD est m=%d car n est 0\n", m);
    }

    for (int i = 1; i < 100; i++) {
        int x = m % n;
        m = n;
        n = x;

        if (n == 0) {
            printf("Le GCD est %d\n", m);
            break;
        }
    }


    return 0;
}
