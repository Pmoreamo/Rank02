void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;

    printf("Abans:\n");
    printf("x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Despres:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}