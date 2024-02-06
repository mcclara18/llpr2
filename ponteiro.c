#include <stdio.h>

int main() {
    float num;
    float *p;

    p = &num;

    printf("Digite um valor real: ");
    scanf("%f", &num);

    float dobro = *p * 2;

    printf("1 valor: %.2f\n", *p);
    printf("Dobro: %.2f\n", dobro);

    return 0;
}
