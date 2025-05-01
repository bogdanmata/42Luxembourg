#include <unistd.h>

#define INT_MIN 0x80000000
#define INT_MAX 0x7fffffff

void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
    ft_putnbr(123);
    ft_putchar('\n');
    ft_putnbr(-123);
    ft_putchar('\n');
    ft_putnbr(sizeof(int));
    ft_putchar('\n');
    ft_putnbr(INT_MAX);
    ft_putchar('\n');
    ft_putnbr(INT_MIN);
    ft_putchar('\n');
    
    return 0;
}

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == INT_MIN)
    {
        // Special case: can't represent abs(INT_MIN) as +2147483648
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}