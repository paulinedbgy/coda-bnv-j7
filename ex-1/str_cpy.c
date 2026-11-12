#include <stdlib.h>
#include "str_cpy.h"

int str_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *str_cpy(char *str)
{
    int i;
    char *cpy;

    cpy = malloc(sizeof(char) * (str_len(str) + 1));
    if (cpy == NULL)
        return (NULL);

    i = 0;
    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';

    return (cpy);
}