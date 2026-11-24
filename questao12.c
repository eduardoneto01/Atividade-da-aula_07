#include <stdio.h>
#include <locale.h>

int calcularTotalEstoque(int estoque[], int tam) {
    int i, total = 0;

    for (i = 0; i < tam; i++) {
        total += estoque[i];
    }
    return total;
}

int contarEstoqueBaixo(int estoque[], int tam) {
    int i, cont = 0;

    for (i = 0; i < tam; i++) {
        if (estoque[i] < 5) {
            cont++;
        }
    }
    return cont;
}

// os codigos vao de 1 a 8, entao o produto de codigo 1 fica no indice 0, e assim por diante
int buscarProduto(int estoque[], int tam, int codigo) {
    int i;

    for (i = 0; i < tam; i++) {
        if (i + 1 == codigo) {
            return i;
        }
    }
    return -1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int estoque[8];
    int i, codigo, pos;

    for (i = 0; i < 8; i++) {
        printf("Quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nTotal de itens no estoque: %d\n", calcularTotalEstoque(estoque, 8));
    printf("Produtos com estoque baixo (menos de 5): %d\n", contarEstoqueBaixo(estoque, 8));

    printf("\nDigite o codigo do produto que quer buscar (1 a 8): ");
    scanf("%d", &codigo);

    pos = buscarProduto(estoque, 8, codigo);
    if (pos == -1) {
        printf("Produto nao encontrado!\n");
    } else {
        printf("Produto encontrado na posicao %d do vetor, com %d unidades\n", pos, estoque[pos]);
    }

    return 0;
}
