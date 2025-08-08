#include <stdlib.h>

char *ft_itoa(int n)
{
    long num = n; // usar long para evitar overflow com INT_MIN
    int len = (n <= 0) ? 1 : 0;
    char *str;

    // conta os dígitos
    long tmp = num;
    while (tmp != 0) {
        tmp /= 10;
        len++;
    }

    // aloca e adiciona terminador
    str = malloc(len + 1);
    if (!str) return NULL;
    str[len] = '\0';

    // trata zero
    if (num == 0)
        str[0] = '0';

    // trata negativo
    if (num < 0) {
        str[0] = '-';
        num = -num;
    }

    // preenche de trás pra frente
    while (num > 0) {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    return str;
}