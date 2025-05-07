#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main() {
    // values
    int a = 16, b = 3;
    // pointers
    int *pa = &a, *pb = &b;
    printf("%d %d\n", a, b);
    // ft_ultimate_div_mod(&a, &b);
    ft_ultimate_div_mod(pa, pb);

    printf("%d %d\n", a, b);
    return 0;
}

void ft_ultimate_div_mod(int *a, int *b) {
    int temp = (*a) / (*b);
    (*b) = (*a) % (*b);
    (*a) = temp;
}