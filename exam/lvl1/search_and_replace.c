#include <unistd.h>

void    search_and_replace(char *s1, char *s2, char *s3)
{
    int i = 0;

    while (s1[i] != '\0')
    {
        if (s1[i] == s2[0])
            s1[i] = s3[0];
        write(1, &s1[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 4 && !argv[2][1] && !argv[3][1])
        search_and_replace(argv[1], argv[2], argv[3]);
    else
        write(1, "\n", 1);
    return (0);
}