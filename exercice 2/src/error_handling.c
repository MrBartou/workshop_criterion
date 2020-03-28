#include "my.h"

char error_handling(int number)
{
    char retour;

    if (number == 0) {
        retour = 'e';
        return (retour);
    } else if (number == 1) {
        retour = 'p';
        return (retour);
    } else {
        retour = 'o';
        return (retour);
    }
}