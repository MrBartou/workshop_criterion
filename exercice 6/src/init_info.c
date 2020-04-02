#include "my.h"

personnal_info_t init_info(personnal_info_t info)
{
    info.age = 0;
    info.firstname = NULL;
    info.lastname = NULL;
    info.separate = malloc(sizeof(char *));
    info.separate[0] = malloc(sizeof(char) * 20);
    for (int count = 0; count != 20; count++)
        info.separate[0][count] = '*';
    return (info);
}