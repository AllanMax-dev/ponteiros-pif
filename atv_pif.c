#include <stdio.h>

int main() {
    float preco = 100.0;
    float *p_preco;

    printf("Preco antes do aumento: %.2f\n", preco);

    p_preco = &preco;

    *p_preco = *p_preco + (*p_preco * 0.10);

    printf("Preco depois do aumento: %.2f\n", preco);

    return 0;
}
