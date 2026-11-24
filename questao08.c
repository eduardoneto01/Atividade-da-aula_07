#include <stdio.h>
#include <locale.h>

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    // testa os divisores ate a raiz quadrada (i * i <= n) sem usar sqrt
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPrimo(num) == 1) {
        printf("%d e primo\n", num);
    } else {
        printf("%d nao e primo\n", num);
    }

    return 0;
}
