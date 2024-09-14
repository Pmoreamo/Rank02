#include <unistd.h>

void    putnum(int num)
{
    char digit;

    if (num > 9)
        putnum(num / 10);
    digit = num % 10 + '0';
    write(1, &digit, 1);
}

int main()
{
    int i = 1;

    while ( i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnum(i);
        write(1, "\n", 1);
        i++;
    }
}