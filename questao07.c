#include <stdio.h>
#include <locale.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

void verificarSituacao(float media) {
    if (media >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);

    media = calcularMedia(a, b, c);
    printf("Media: %.2f\n", media);
    verificarSituacao(media);

    return 0;
}
