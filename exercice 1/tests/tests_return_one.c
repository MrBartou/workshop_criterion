#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stds(void)
{
cr_redirect_stdout ();
cr_redirect_stderr ();
}

Test(error_handling, return_fonction_84, .init = redirect_all_stds)
{
    char *string = "error";

    // cr..
}

Test(error_handling, return_fonction_1, .init = redirect_all_stds)
{
    char *string = "passed";

    // cr..
}

Test(error_handling, return_fonction_0, .init = redirect_all_stds)
{
    char *string = "other";

    // cr..
}