#include <stdio.h>
#include <locale.h>

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPar(num) == 1) {
        printf("O numero %d e par\n", num);
    } else {
        printf("O numero %d e impar\n", num);
    }

    return 0;
}
