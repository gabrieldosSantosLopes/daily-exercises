#include <stdio.h>


// em C vc deve definir nao somente a variavel, mais tambvem como ela sera exibida
int main() {

    int a = 10, b = 3;

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %d\n", a / b);
    printf("Resto da divisao: %d\n", a % b);

    return 0;
}