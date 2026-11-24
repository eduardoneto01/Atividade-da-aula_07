#include <stdio.h>
#include <locale.h>

void mostrarTabuada(int n) {
    int i;

    printf("Tabuada do %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    mostrarTabuada(num);

    return 0;
}
