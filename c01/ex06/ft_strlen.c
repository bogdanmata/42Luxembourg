#include <stdio.h>

int ft_strlen(char *str);

int main() {
    printf("%d\n", ft_strlen("Hello world!"));
    return 0;
}

int ft_strlen(char *str) {
    int count = 0;
    // char \0 represent finish of a c type string
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
