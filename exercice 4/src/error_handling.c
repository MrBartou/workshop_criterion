#include "my.h"

char *error_handling(int number)
{
    char *retour;

    if (number == 0) {
        retour = "error";
        write(1, retour, 5);
        return (retour);
    } else if (number == 1) {
        retour = "passed";
        write(1, retour, 6);
        return (retour);
    } else {
        retour = "other";
        write(1, retour, 5);
        return (retour);
    }
}