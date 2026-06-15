#include <stdio.h>
#include <stdlib.h>

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
    Produto *produtos;
    Produto *produto_atual;
    int quantidade;
    int i;
    float percentual_desconto;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    produtos = (Produto *) malloc(quantidade * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        produto_atual = produtos + i;

        printf("\nProduto %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &produto_atual->id);
        printf("Preco: ");
        scanf("%f", &produto_atual->preco);
    }

    printf("\nProdutos cadastrados:\n");
    imprimir_produtos(produtos, quantidade);

    printf("\nPercentual de desconto: ");
    scanf("%f", &percentual_desconto);

    for (i = 0; i < quantidade; i++) {
        aplicar_desconto(produtos + i, percentual_desconto);
    }

    printf("\nProdutos depois do desconto:\n");
    imprimir_produtos(produtos, quantidade);

    free(produtos);

    return 0;
}
