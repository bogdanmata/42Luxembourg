#include <stdio.h>

void ft_swap(int *a, int *b);

int main() {
    int a = 1, b = 2;
    printf("%d %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void ft_swap(int *a, int *b) {
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}