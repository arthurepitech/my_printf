/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** test_my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std3(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, flag_unsigned, .init = redirect_all_std3)
{
    my_printf("=> Nombre non signe [u] : {%u}\n", 012345);
    cr_assert_stdout_eq_str("=> Nombre non signe [u] : {5349}\n");
}

Test(my_printf, flag_octal, .init = redirect_all_std3)
{
    my_printf("=> Nombre octal [o] : {%o}\n", 145782354);
    cr_assert_stdout_eq_str("=> Nombre octal [o] : {1054073122}\n");
}

Test(my_printf, flag_binaire, .init = redirect_all_std3)
{
    my_printf("=> Nombre binaire [b] : {%b}\n", 1564545);
    cr_assert_stdout_eq_str("=> Nombre binaire [b] : {101111101111110000001}\n");
}

Test(my_printf, flag_hexa, .init = redirect_all_std3)
{
    my_printf("=> Nombre hexadecimal [x] : {%x}\n", 145789);
    cr_assert_stdout_eq_str("=> Nombre hexadecimal [x] : {2397d}\n");
}

Test(my_printf, flag_hexa_maj, .init = redirect_all_std3)
{
    my_printf("=> Nombre hexadecimal [X] : {%X}\n", 145789);
    cr_assert_stdout_eq_str("=> Nombre hexadecimal [X] : {2397D}\n");
}

Test(my_printf, flag_char, .init = redirect_all_std3)
{
    my_printf("=> Caractere [c] : {%c}\n", 42);
    cr_assert_stdout_eq_str("=> Caractere [c] : {*}\n");
}

Test(my_printf, flag_string_maj, .init = redirect_all_std3)
{
    my_printf("=> Chaine [S] : {%S}\n", "astek");
    cr_assert_stdout_eq_str("=> Chaine [S] : {astek}\n");
}

Test(my_printf, flag_modulo, .init = redirect_all_std3)
{
    my_printf("=> Modulo [%%] : {%%}%n\n");
    cr_assert_stdout_eq_str("=> Modulo [%] : {%}19\n");
}

Test(my_printf, flag_01, .init = redirect_all_std3)
{
    my_printf("%b", 1564545);
    cr_assert_stdout_eq_str("101111101111110000001");
}

Test(my_printf, flag_02, .init = redirect_all_std3)
{
    my_printf("%c", 42);
    cr_assert_stdout_eq_str("*");
}

Test(my_printf, flag_03, .init = redirect_all_std3)
{
    my_printf("%x", 0xabcde);
    cr_assert_stdout_eq_str("abcde");
}

Test(my_printf, flag_04, .init = redirect_all_std3)
{
    my_printf("%X", 0xabcde);
    cr_assert_stdout_eq_str("ABCDE");
}

Test(my_printf, flag_05, .init = redirect_all_std3)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, flag_06, .init = redirect_all_std3)
{
    my_printf("%o", 012345);
    cr_assert_stdout_eq_str("12345");
}

Test(my_printf, flag_08, .init = redirect_all_std3)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, flag_09, .init = redirect_all_std3)
{
    my_printf("%i", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, flag_10, .init = redirect_all_std3)
{
    my_printf("%u", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, flag_11, .init = redirect_all_std3)
{
    my_printf("%d %d %d", 0, 42, 2147483647);
    cr_assert_stdout_eq_str("0 42 2147483647");
}

Test(my_printf, flag_12, .init = redirect_all_std3)
{
    my_printf("%d %d %d", -0, -42, -2147483647);
    cr_assert_stdout_eq_str("0 -42 -2147483647");
}

Test(my_printf, flag_14, .init = redirect_all_std3)
{
    my_printf("%c %d %s", 42, 42, "astek");
    cr_assert_stdout_eq_str("* 42 astek");
}
