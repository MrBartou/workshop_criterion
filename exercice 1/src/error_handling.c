#include "my.h"

int error_handling(char *string)
{
    if (my_strcmp(string, "error") == 0)
        return (84);
    else if (my_strcmp(string, "passed") == 0)
        return (1);
    else
        return (0);
}