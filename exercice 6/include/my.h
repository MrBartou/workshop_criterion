#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef MY_H_
#define MY_H_

typedef struct personnal_info
{
    int age;
    char *firstname;
    char *lastname;
    char **separate;

} personnal_info_t;

int main(int ac, char **av);
personnal_info_t init_info(personnal_info_t info);
personnal_info_t fill_parameter(personnal_info_t info, char **av);
int print_card(personnal_info_t info);

#endif /* !MY_H_ */
