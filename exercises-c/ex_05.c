#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        
        printf("Voce e menor de idade.\n");

    } else if (idade >= 18 && idade < 60) {

        printf("Voce e adulto.\n");

    } else {

        printf("Voce e idoso.\n");

    }

    return 0;

}