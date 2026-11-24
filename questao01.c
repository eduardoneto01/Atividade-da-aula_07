#include <stdio.h>
#include <locale.h>

void mostrarSaudacao() {
    printf("Bem-vindo ao mundo das funcoes em C!\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    mostrarSaudacao();
    mostrarSaudacao();
    mostrarSaudacao();

    return 0;
}
