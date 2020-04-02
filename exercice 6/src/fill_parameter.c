#include "my.h"

personnal_info_t fill_parameter(personnal_info_t info, char **av)
{
    info.age = atoi(av[1]);
    info.firstname = av[2];
    info.lastname = av[3];
    return (info);
}