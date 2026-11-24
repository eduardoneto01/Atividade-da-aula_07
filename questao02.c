#include <stdio.h>
#include <locale.h>

int calcularDobro(int n) {
    return n * 2;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O dobro de %d e %d\n", num, calcularDobro(num));

    return 0;
}
