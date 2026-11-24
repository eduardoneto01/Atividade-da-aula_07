#include <stdio.h>
#include <locale.h>

float calcularMediaTurma(float notas[], int tam) {
    int i;
    float soma = 0;

    for (i = 0; i < tam; i++) {
        soma += notas[i];
    }
    return soma / tam;
}

float encontrarMaiorNota(float notas[], int tam) {
    int i;
    float maior = notas[0];

    for (i = 1; i < tam; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int contarAprovados(float notas[], int tam) {
    int i, aprovados = 0;

    for (i = 0; i < tam; i++) {
        if (notas[i] >= 7.0) {
            aprovados++;
        }
    }
    return aprovados;
}

// recebe os resultados ja calculados e so mostra na tela
void exibirResultados(float media, float maior, int aprovados) {
    printf("\n--- Resultados da turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Quantidade de aprovados: %d\n", aprovados);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float notas[10];
    float media, maior;
    int i, aprovados;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMediaTurma(notas, 10);
    maior = encontrarMaiorNota(notas, 10);
    aprovados = contarAprovados(notas, 10);

    exibirResultados(media, maior, aprovados);

    return 0;
}
