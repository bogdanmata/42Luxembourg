#include <unistd.h>

void ft_putstr(char *str);

int main() {
    ft_putstr("Hello world!");
    return 0;
}

void ft_putstr(char *str) {
    int i = 0;
    // char \0 represent finish of a c type string
    while (str[i] != '\0'){
        i++;
    }
    write(STDOUT_FILENO, str, i);
}
