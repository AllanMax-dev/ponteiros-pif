## Ponteiros-PIF


## Objetivo

O programa demonstra, de forma incremental, o uso de ponteiros para alterar valores diretamente na memoria, passar dados por referencia, acessar campos de structs, percorrer arrays com aritmetica de ponteiros e trabalhar com alocacao dinamica.

## Atividades

### Atividade 1: Fundamentos de ponteiros

O codigo inicial declara uma variavel `float` chamada `preco`, cria um ponteiro para `float` e faz esse ponteiro apontar para o endereco da variavel. A alteracao do preco e feita diretamente pelo ponteiro, comprovando que o valor original armazenado na variavel foi modificado.

### Atividade 2: Passagem por referencia

A logica de alteracao do preco foi movida para a funcao `aplicar_desconto`. Essa funcao recebe um ponteiro para o preco e o percentual de desconto, alterando o valor original na memoria sem retornar outro valor.

### Atividade 3: Ponteiros para structs

Foi criada a struct `Produto`, contendo os campos `id` e `preco`. A funcao `aplicar_desconto` passou a receber um ponteiro para `Produto` e usa o operador seta (`->`) para acessar e modificar o campo `preco`.

### Atividade 4: Aritmetica de ponteiros em arrays

O programa foi expandido para trabalhar com um pequeno estoque de produtos. A funcao `imprimir_produtos` recebe um ponteiro para `Produto` e a quantidade de itens, percorrendo o vetor com aritmetica de ponteiros, como em `(produtos + i)->preco`.

### Atividade 5: Alocacao dinamica de memoria

A versao final remove o limite fixo de tres produtos. O usuario informa quantos produtos deseja cadastrar, o programa aloca memoria com `malloc`, preenche o vetor usando ponteiros, imprime os produtos, aplica o desconto informado e libera a memoria com `free`.
