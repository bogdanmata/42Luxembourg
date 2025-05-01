#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    ft_putchar('a');
    ft_putchar('b');
    return 0;
}

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}