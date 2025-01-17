#include <stdio.h>

int main() {

    int n = 5, soma = 0;

    for (int i = 1; i <= n; i++) {

        int res = soma += i;

        printf("%d + %d = %d\n", i, soma, res);

    }

    return 0;

}