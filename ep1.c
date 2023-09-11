#include <stdio.h>
#include <math.h>

#define  TAM_MAX 10


int main() {
    int n;
    float num;
    float soma=0, media=0;
    
    float vetor[TAM_MAX];

    printf("Quantos números em sua série? ");
    scanf("%d", &n);

    if( n > TAM_MAX ){
        printf("O número máximo de elementos é %d\n", TAM_MAX);
        return 0;
    }
    
    printf("Entrando %d valores:\n", n);
    for( int conta=0; conta<n ; conta++) { 
        printf("%d > ", conta+1);
        scanf("%f", &num);
        vetor[conta] = num;
        soma = soma + num;
    }
    printf("A soma total é %f\n", soma);
    media = soma/n;
    printf("A média aritimética é %.2f \n\n", media);
    
    // calculando desvio-padrão
    soma=0;
    for( int i=0; i<n; i++ ){
           soma += (vetor[i]-media)*(vetor[i]-media);
    }
    printf("O desvio padrão populacional é %.2f\n", sqrt( soma / n ) );
    printf("O desvio padrão amostral é %.2f\n\n", sqrt( soma / (n-1) ) );

    return 0;
    
    
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
    printf("Mediana: %.2lf\n", mediana);
    return 0;
}


