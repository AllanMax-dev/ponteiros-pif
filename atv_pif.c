#include <stdio.h>

void aplicar_desconto(float *preco, float percentual_desconto) {
    *preco = *preco - (*preco * percentual_desconto / 100);
}

int main() {
    float preco = 100.0;

    printf("Preco antes do desconto: %.2f\n", preco);

    aplicar_desconto(&preco, 10.0);

    printf("Preco depois do desconto: %.2f\n", preco);

    return 0;
}
