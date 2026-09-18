#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("Scrivi il valore di x\n");
    int *x = malloc(sizeof(int));
    scanf("%d", x);
    printf("Valore di x: %d\n", *x);
    printf("Indirizzo di x: %p\n", &x);
    printf("Valore puntato da ptr: %d\n", *x);
    printf("Scrivi il nuovo valore di x\n");
    scanf("%d", x);
    printf("Valore di x: %d\n", *x);
    return 0;
}