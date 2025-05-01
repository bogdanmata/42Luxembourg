#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet(void)
{
    for (char c = 'z'; c >= 'a'; c--)
    {
        write(STDOUT_FILENO, &c, 1);
    }
}