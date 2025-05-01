#include <unistd.h>

void ft_is_negative(int n);

int main()
{
    ft_is_negative(10);
    ft_is_negative(-10);
    ft_is_negative(0);
    return 0;
}

void ft_is_negative(int n) {
    char c = ( n < 0) ? 'N' : 'P';
    write(STDOUT_FILENO, &c, 1);
}