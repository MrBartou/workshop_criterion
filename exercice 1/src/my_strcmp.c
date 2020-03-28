#include "my.h"

int my_strcmp(char *s1, char *s2)
{
        if (*s1 > *s2)
            return (1);
        else if (*s1 < *s2)
            return (-1);
        else
            return (0);
    return (-3);
}