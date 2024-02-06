#include <stdio.h>


void troca(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int a, b, c;

     printf("valores de a, b, c:");
     scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        troca(&a, &b);
    }
    if (a > c) {
        troca(&a, &c);
    }
    if (b > c) {
        troca(&b, &c);
    }

    
    printf("%d, %d, %d\n", a, b, c);

    return 0;
}
