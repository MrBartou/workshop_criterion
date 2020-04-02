#include "my.h"

char *error_handling(int number)
{
    char *retour;

    if (number == 0) {
        retour = "error";
        write(2, retour, 5);
    } else if (number == 1) {
        retour = "passed";
        write(2, retour, 6);
    } else {
        retour = "other";
        write(2, retour, 5);
    }
    return (retour);
}