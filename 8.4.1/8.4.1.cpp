#include <stdio.h>
#include <stdlib.h>

char*
replq(char* str)
{
    int i, j;

    for (i = j = 0; str[i]; i++)
        if (str[i] != '*') {
            if (str[i] == '!')
            {
                str[j++] = '*';
                i++;
            }
            else
                str[j++] = str[i];
        }
    str[j] = 0;

    return str;
}


int
main(int ac, char* av[])
{
    char str[1000];

    while (fgets(str, 1000, stdin))
        puts(replq(str));

    return puts("End") == EOF;
}