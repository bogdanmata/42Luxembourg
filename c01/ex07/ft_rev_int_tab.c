#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void ft_print_int_tab(int *tab, int size);

void swap(int *a, int *b);

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6};
    ft_print_int_tab(tab, sizeof(tab) / sizeof(int));
    ft_rev_int_tab(tab, sizeof(tab) / sizeof(int));
    ft_print_int_tab(tab, sizeof(tab) / sizeof(int));
    return 0;
}

void swap(int *a, int *b) {
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}

void ft_rev_int_tab(int *tab, int size) {
    for (int i = 0; i < (size / 2); i++) {
        swap(&tab[i], &tab[size - 1 - i]);
    }
}

void ft_print_int_tab(int *tab, int size) {
    printf("[");
    if (size > 0) printf("%d", tab[0]);
    for (int i = 1; i < size; i++) {
        printf(", %d", tab[i]);
    }
    printf("]\n");
}
