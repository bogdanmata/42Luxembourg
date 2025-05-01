#include <unistd.h>

void ft_putchar(char c);
void print_number(int *arr, int n);
void ft_print_comb(void);

int main()
{
    ft_print_comb();
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

void ft_print_comb(void)
{
    int comb[10];

    // Initialize the first combination: 0,1,2,...,n-1
    for (int i = 0; i < 3; i++)
    {
        comb[i] = i;
    }

    while (1)
    {
        print_number(comb, 3);

        // Check if we need to print ", "
        if (comb[0] != 7)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        else
        {
            break;
        }

        // Find the rightmost digit that can be incremented
        int digt_right_pos = 2;
        while (digt_right_pos >= 0 && comb[digt_right_pos] == 9 - (2 - digt_right_pos))
        {
            digt_right_pos--;
        }

        // Increment that digit
        comb[digt_right_pos]++;
        for (int i = digt_right_pos + 1; i < 3; i++)
        {
            comb[i] = comb[i - 1] + 1;
        }
    }
}
