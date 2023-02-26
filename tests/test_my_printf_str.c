/*
** EPITECH PROJECT, 2022
** Part II
** File description:
** test_my_printf_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std1(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, basic_str, .init = redirect_all_std1)
{
    my_printf("Astek");
    cr_assert_stdout_eq_str("Astek");
}

Test(my_printf, basic_flag_str01, .init = redirect_all_std1)
{
    my_printf("%s", "astek");
    cr_assert_stdout_eq_str("astek");
}

Test(my_printf, basic_flag_str02, .init = redirect_all_std1)
{
    my_printf(" [%s] ", "astek");
    cr_assert_stdout_eq_str(" [astek] ");
}

Test(my_printf, basic_flag_str03, .init = redirect_all_std1)
{
    my_printf("%s", "koala");
    cr_assert_stdout_eq_str("koala");
}

Test(my_printf, basic_flag_str07, .init = redirect_all_std1)
{
    my_printf("%s", "astek");
    cr_assert_stdout_eq_str("astek");
}
