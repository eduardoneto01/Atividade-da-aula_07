#include <stdio.h>
#include <locale.h>

float calcularTotal(float vendas[], int tam) {
    int i;
    float total = 0;

    for (i = 0; i < tam; i++) {
        total = total + vendas[i];
    }
    return total;
}

float calcularMedia(float total, int dias) {
    return total / dias;
}

int contarVendasAcimaDaMedia(float vendas[], int tam, float media) {
    int i, cont = 0;

    for (i = 0; i < tam; i++) {
        if (vendas[i] > media) {
            cont++;
        }
    }
    return cont;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float vendas[5];
    float total, media;
    int i, acima;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor das vendas do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    total = calcularTotal(vendas, 5);
    media = calcularMedia(total, 5);
    acima = contarVendasAcimaDaMedia(vendas, 5, media);

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias com vendas acima da media: %d\n", acima);

    return 0;
}
