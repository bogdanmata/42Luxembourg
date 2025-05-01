#include <unistd.h>

void ft_print_alphabet(void);

int main()
{
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void)
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        write(STDOUT_FILENO, &c, 1);
    }
}