#include <unistd.h>

void ft_putchar(char c);
void ft_print_number(int num);
void ft_print_comb2(void);

int main()
{
    ft_print_comb2();
    return 0;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_number(int num)
{
    ft_putchar((num / 10) + '0');
    ft_putchar((num % 10) + '0');
}

void ft_print_comb2(void)
{
    for (int i = 0; i <= 98; i++)
    {
        for (int j = i + 1; j <= 99; j++)
        {
            ft_print_number(i);
            ft_putchar(' ');
            ft_print_number(j);
            if (!(i == 98 && j == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}
