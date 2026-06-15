#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual_desconto) {
    produto->preco = produto->preco - (produto->preco * percentual_desconto / 100);
}

void imprimir_produtos(Produto *produtos, int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("ID: %d | Preco: %.2f\n", (produtos + i)->id, (produtos + i)->preco);
    }
}

int main() {
    Produto produtos[3] = {
        {1, 100.0},
        {2, 50.0},
        {3, 250.0}
    };
    int i;

    printf("Produtos antes do desconto:\n");
    imprimir_produtos(produtos, 3);

    for (i = 0; i < 3; i++) {
        aplicar_desconto(produtos + i, 10.0);
    }

    printf("\nProdutos depois do desconto:\n");
    imprimir_produtos(produtos, 3);

    return 0;
}
