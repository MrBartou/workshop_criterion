#include "my.h"

int main(int ac, char **av)
{
    char *string = "other";
    int error = 0;
    (void)ac;
    (void)av;

    error = error_handling(string);
    return (error);
}