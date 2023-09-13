#include <stdio.h>
#include <math.h>

int main() {
    int N;
    
    printf("Quantos números na sua série (N): ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("A quantidade de números deve ser maior que zero.\n");
        return 1;
    }

    double numeros[N];
    double soma = 0.0;

    printf("Entre com os %d números:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &numeros[i]);
        soma += numeros[i];
    }

    double maximo = numeros[0];
    double minimo = numeros[0];
    for (int i = 1; i < N; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    double media = soma / N;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (numeros[i] > numeros[j]) {
                double temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    double mediana;
    if (N % 2 == 0) {
        mediana = (numeros[N / 2 - 1] + numeros[N / 2]) / 2.0;
    } else {
        mediana = numeros[N / 2];
    }

    double desvio_padrao = 0.0;
    for (int i = 0; i < N; i++) {
        desvio_padrao += pow(numeros[i] - media, 2);
    }
    desvio_padrao = sqrt(desvio_padrao / N);

    printf("Máximo: %.2lf\n", maximo);
    printf("Mínimo: %.2lf\n", minimo);
    printf("Média: %.2lf\n", media);
    printf("Mediana: %.2lf\n", mediana);
    printf("Desvio-Padrão (populacional): %.2lf\n", desvio_padrao);

    return 0;
}
