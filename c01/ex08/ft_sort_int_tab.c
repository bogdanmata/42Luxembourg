#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void ft_print_int_tab(int *tab, int size);

void swap(int *a, int *b);

int main() {
//    int tab[] = {1, 2, 3, 4, 5, 6};
    int tab[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    ft_print_int_tab(tab, sizeof(tab) / sizeof(int));
    ft_sort_int_tab(tab, sizeof(tab) / sizeof(int));
    ft_print_int_tab(tab, sizeof(tab) / sizeof(int));
    return 0;
}

void swap(int *a, int *b) {
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}

void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    while (i < size - 1) {
        if (tab[i] > tab[i + 1]) {
            swap(&tab[i], &tab[i + 1]);
            i = 0;
            continue; // move to the beginning of the while loop
        }
        i++;
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
