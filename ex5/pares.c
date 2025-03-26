#include <stdio.h>

int main () {
    int n, i;

    printf("Insira um numero, sera mostrado os numeros pares de 1 ate o numero inserido: ");
    scanf("%d", &n);

    for (i = 0; i < n+1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
}