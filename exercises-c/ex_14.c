#include <stdio.h>

int conversor(int c) {

    return c * 1.8 + 32;

}

int main() {    

    float fahrenheit = conversor(35);
    printf("35C equivale a: %f\n", fahrenheit);

    return 0;

}