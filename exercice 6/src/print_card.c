#include "my.h"

int print_card(personnal_info_t info)
{
    printf("Id card of EPITECH\n");
    printf("%s\n", info.separate[0]);
    printf("First name is : %s\n", info.firstname);
    printf("Last name is : %s\n", info.lastname);
    printf("Age is : %d\n", info.age);
    return (0);
}