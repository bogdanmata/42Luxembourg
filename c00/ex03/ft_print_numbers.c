#include <unistd.h>

void ft_print_numbers(void);

int main()
{
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void)
{
    for (char c = '0'; c <= '9'; c++)
    {
        write(STDOUT_FILENO, &c, 1);
    }
    
}