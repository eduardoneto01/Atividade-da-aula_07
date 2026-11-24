#include <stdio.h>
#include <locale.h>

int maiorNumero(int a, int b) {
    if (a >= b) {
        return a; // se forem iguais tanto faz
    } else {
        return b;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("O maior numero e: %d\n", maiorNumero(x, y));

    return 0;
}
