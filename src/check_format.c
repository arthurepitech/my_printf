/*
** EPITECH PROJECT, 2022
** Part II
** File description:
** check_format
*/

#include "../include/my.h"
#include <stdarg.h>

void check_format(const char *format, va_list list, my_struct_t *mem)
{
    char *flag_f = "#*+\0";
    int (*l_call[3])(va_list list, my_struct_t *mem, const char *format) =
        {print_hastag, print_spaces, print_utils};
    for (int y = 0; flag_f[y] != '\0'; y++) {
        if (flag_f[y] == format[mem->i]) {
            mem->exist = 1;
            (*l_call[y])(list, mem, format);
            check_basic(format[mem->i], list, mem);
        }
    }
    return;
}
