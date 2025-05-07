#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main() {
    int a = 16, b = 3;
    printf("%d %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}

void ft_ultimate_div_mod(int *a, int *b) {
    int temp = (*a) / (*b);
    (*b) = (*a) % (*b);
    (*a) = temp;
}