int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("%i\n", ft_strlen(argv[1]));
}