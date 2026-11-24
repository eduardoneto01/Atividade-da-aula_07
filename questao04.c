#include <stdio.h>
#include <locale.h>

float celsiusParaFahrenheit(float c) {
    float f;
    f = (9 * c) / 5 + 32;
    return f;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float temp;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);
    printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", temp, celsiusParaFahrenheit(temp));

    return 0;
}
