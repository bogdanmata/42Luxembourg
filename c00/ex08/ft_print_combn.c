#include <unistd.h>

void ft_putchar(char c);
void print_number(int *arr, int n);
void ft_print_combn(int n);

int main()
{
    ft_print_combn(2);
    ft_putchar('\n');
    ft_print_combn(5);
    ft_putchar('\n');
    return 0;
}

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void print_number(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        ft_putchar(arr[i] + '0');
}

void ft_print_combn(int n)
{
    int comb[10];

    // Initialize the first combination: 0,1,2,...,n-1
    for (int i = 0; i < n; i++)
    {
        comb[i] = i;
    }

    while (1)
    {
        print_number(comb, n);

        // Check if we need to print ", "
        if (comb[0] != (10 - n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        else
        {
            break;
        }

        // Find the rightmost digit that can be incremented
        int digt_right_pos = n - 1;
        while (digt_right_pos >= 0 && comb[digt_right_pos] == 9 - (n - 1 - digt_right_pos))
        {
            digt_right_pos--;
        }

        // Increment that digit
        comb[digt_right_pos]++;
        for (int i = digt_right_pos + 1; i < n; i++)
        {
            comb[i] = comb[i - 1] + 1;
        }
    }
}
