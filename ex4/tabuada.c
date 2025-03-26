#include <stdio.h>

int main() {
    int n, i, res;
    printf("Insira o numero que deseja ver a tabuada: ");
    scanf("%d", &n);

    for (i = 0; i < 11; i++)
    {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
    }
    
}