#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}

int main(void) {
    int a = 0, b = 5;
    int result = multiplyNumbers(a, b);
    printf("%d\n", result);       // para evitar error unusedFunction estava dando no ctions

    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) {
        arr[i] = i;
        printf("%d\n", arr[i]);   // para evitar error unusedVariable estava dando noa ctions
    }

    return 0;
}