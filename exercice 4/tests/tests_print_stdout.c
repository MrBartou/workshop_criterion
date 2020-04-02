#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stds(void)
{
cr_redirect_stdout ();
cr_redirect_stderr ();
}

Test(error_handling, return_fonction_error, .init = redirect_all_stds)
{
    int number = 0;

    // fonction
    // cr_..
}

Test(error_handling, return_fonction_passed, .init = redirect_all_stds)
{
    int number = 1;

    // fonction
    // cr_..
}

Test(error_handling, return_fonction_other, .init = redirect_all_stds)
{
    int number = 42;

    // fonction
    // cr_..
}