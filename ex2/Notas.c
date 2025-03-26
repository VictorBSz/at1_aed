#include <stdio.h>

int main () {
    float n1, n2, n3, n, soma, md;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

    soma = n1+n2+n3;
    md = soma / 3;

    if (md < 5)
    {
        printf("Reprovado! Sua media foi %.1f", md);
    }
    else if (md >=7)
    {
        printf("Aprovado! Sua media foi %.1f", md);
    }
    else
    {
        printf("Recuperacao! Sua media foi %.1f", md);
    }

    return 0;
}