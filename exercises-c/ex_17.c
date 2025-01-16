#include <stdio.h>

int main() {

    int n = 5, fatorial = 1;

    for (int i = 1; i <= n; i++) {

        fatorial *= i;

    }

    printf("%d", fatorial);

    return 0;

}