#include <stdio.h>

void ft_ft(int *nbr);

int main() {
    int nbr = 0;
    printf("%d\n", nbr);
    ft_ft(&nbr);
    printf("%d\n", nbr);
    return 0;
}

void ft_ft(int *nbr) {
    (*nbr) = 42;
}