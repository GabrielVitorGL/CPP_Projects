#include <stdio.h>

int main() {
    printf("Incrementando antes: \n");

    int V = 5;
    int Z = 7;

    Z = ++V;
    printf("V: %d\n", V);
    printf("Z: %d\n", Z);


    printf("\n\nIncrementando depois: \n");

    V = 5;
    Z = 7;

    Z = V++;
    printf("V: %d\n", V);
    printf("Z: %d\n", Z);

    return 0;
}
