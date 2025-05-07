#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main() {
    int nbr = 0;
    printf("%d\n", nbr);
    int *pa1 = &nbr;
    int **pa2 = &pa1;
    int ***pa3 = &pa2;
    int ****pa4 = &pa3;
    int *****pa5 = &pa4;
    int ******pa6 = &pa5;
    int *******pa7 = &pa6;
    int ********pa8 = &pa7;
    int *********pa9 = &pa8;
    ft_ultimate_ft(pa9);
    printf("%d\n", nbr);
    return 0;
}

void ft_ultimate_ft(int *********nbr) {
    (*(*(*(*(*(*(*(*(*nbr))))))))) = 42;
}