#include "my.h"

char *error_handling(int number)
{
    char *retour;

    if (number == 0) {
        retour = "error";
        return (retour);
    } else if (number == 1) {
        retour = "passed";
        return (retour);
    } else {
        retour = "other";
        return (retour);
    }
}