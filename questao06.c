#include <stdio.h>
#include <locale.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Escolha a operacao: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Resultado: %.2f\n", somar(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(n1, n2));
            break;
        case 4:
            if (n2 != 0) {
                printf("Resultado: %.2f\n", dividir(n1, n2));
            } else {
                printf("Erro: nao existe divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
