/*
** EPITECH PROJECT, 2022
** Part II
** File description:
** test_my_printf_advanced
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, flag_double_s, .init = redirect_all_std2)
{
    my_printf("%s%s", "astek", "moulinette");
    cr_assert_stdout_eq_str("astekmoulinette");
}

Test(my_printf, flag_double_s_space, .init = redirect_all_std2)
{
    my_printf(" %s %s ", "astek", "moulinette");
    cr_assert_stdout_eq_str(" astek moulinette ");
}

Test(my_printf, flag_d_s, .init = redirect_all_std2)
{
    my_printf("%s%%%d%s", "astek", 42, "moulinette");
    cr_assert_stdout_eq_str("astek%42moulinette");
}

Test(my_printf, flag_s_d, .init = redirect_all_std2)
{
    my_printf("%%s%%d%s%d%%", "Astek", 42);
    cr_assert_stdout_eq_str("%s%dAstek42%");
}
