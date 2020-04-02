#include "my.h"

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    personnal_info_t info;

    info = init_info(info);
    info = fill_parameter(info, av);
    print_card(info);
    return (0);
}