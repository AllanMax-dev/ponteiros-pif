#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual_desconto) {
    produto->preco = produto->preco - (produto->preco * percentual_desconto / 100);
}

int main() {
    Produto produto = {1, 100.0};

    printf("Produto %d antes do desconto: %.2f\n", produto.id, produto.preco);

    aplicar_desconto(&produto, 10.0);

    printf("Produto %d depois do desconto: %.2f\n", produto.id, produto.preco);

    return 0;
}
