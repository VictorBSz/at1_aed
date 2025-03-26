#include <stdio.h>

int main () {
    int n, i;

    printf("Insira um numero, sera mostrado os numeros pares de 1 ate o numero inserido: ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 0; i < n+1; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
            
        }
    }
    else {
        printf("O numero informado é igual ou menor a 0, por favor insira um numero inteiro positivo");
    }

    return 0;
}