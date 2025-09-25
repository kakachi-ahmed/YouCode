#include <stdio.h>

int main() {
    int n, m;
    printf("Entrez une fraction :  ");
    scanf("%d/%d", &n, &m);
    int x=n ,y=m;

    if (n == 0) {
        printf("le GCD est m=%d car n est 0\n", m);
    }

    for (int i = 1; i < 100; i++) {
        int x = m % n;
        m = n;
        n = x;

        if (n == 0) {

            break;
        }
    }

     x = x / m;
     y = y / m;

     printf("Sous sa forme la plus simple : %d/%d",y,x);
    return 0;
}
