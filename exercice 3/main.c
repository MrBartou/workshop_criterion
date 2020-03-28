#include "my.h"

int main(int ac, char **av)
{
    char *error;
    (void)av;
    (void)ac;
    int number = 0;

    error = error_handling(number);
    printf("%s", error);
    return (0);
}