#include <stdio.h>

int main() {

    int matriz[2] [3] = {{1, 2, 3}, {4, 5, 6}}; // Matriz 2X3


    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            printf("matriz[%d] [%d] = %d\n", i, j, matriz[i] [j]);

        }
        
    }

    return 0;

 }