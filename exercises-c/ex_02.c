#include <stdio.h>

int main() {

    // Os tipos das variaveis precisam ser declaradas
    int idade = 18;
    float altura = 1.78;
    char inicial = 'G';

    // E preciso usar especifiocadores de formantos na funcao printf() para formatar a saida dos dados
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);

    return 0;
}
