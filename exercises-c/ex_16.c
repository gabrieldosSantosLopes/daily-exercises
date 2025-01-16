#include <stdio.h>

int main() {

    int a = 9;
    int b = 2;
    int c = 21;

    printf("Entre %d, %d e %d... ", a, b, c);

    if (a > b && a > c) {

        printf("o maior e %d", a);
        
    } else if (b > a && b > c) {

        printf("o maior e %d", b);

    } else {

        printf("o maior e %d", c);

    }

    return 0;

}