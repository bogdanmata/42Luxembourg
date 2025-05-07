#include <stdio.h>
#include <malloc.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main() {
    // values
    int a = 16, b = 3;
    int *div = malloc(sizeof(int)), *mod = malloc(sizeof(int));
    ft_div_mod(a, b, div, mod);

    printf("%d %d %d %d\n", a, b, *div, *mod);
}

void ft_div_mod(int a, int b, int *div, int *mod) {
    (*div) = a / b;
    (*mod) = a % b;
}