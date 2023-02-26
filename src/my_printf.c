/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** main
*/

#include "../include/my.h"
#include <stdarg.h>
#include <stdlib.h>

int check_long(char cflags, va_list list, my_struct_t *mem)
{
    mem->i++;
    char *flag_l = "diuboxX\0";
    int (*l_call[7])(va_list list, my_struct_t *mem) = {print_lnbr, print_lnbr
        , print_lunsigned, print_lbinaire, print_loctal, print_lhexa
        , print_lhexa_maj};
    for (int y = 0; flag_l[y] != '\0'; y++) {
        if (flag_l[y] == cflags) {
            mem->exist = 1;
            mem->i += (*l_call[y])(list, mem);
            break;
        }
    }
    return 0;
}

void check_float(char cflag, va_list list, my_struct_t *mem)
{
    mem->i++;
    char *flag_f = "123456789\0";
    for (int y = 0; flag_f[y] != '\0'; y++) {
        if (flag_f[y] == cflag) {
            mem->exist = 1;
            mem->i += print_float(list, y + 1, mem);
            break;
        }
    }
    return;
}

void check_basic(char cflag, va_list list, my_struct_t *mem)
{
    char *flags = "%diouxXbsScfFnpt\0";
    int (*function_call[16])(va_list list, my_struct_t *mem) = {print_modulo
        , print_nbr, print_nbr, print_octal, print_unsigned, print_hexa
        , print_hexa_maj, print_binaire, print_str, print_str_maj, print_char
        , print_float_basic, print_float_basic, print_len_count, print_pointer
        , print_array};
    for (int y = 0; flags[y] != '\0'; y++) {
        if (flags[y] == cflag) {
            mem->exist = 1;
            (*function_call[y])(list, mem);
        }
    }
    return;
}

void check_flag_type(const char *format, va_list list, my_struct_t *mem, int y)
{
    mem->exist = 0;
    mem->i++;
    check_basic(format[mem->i], list, mem);
    if (format[mem->i] == '.' && format[mem->i + 1] == format[y + 1]
        && format[mem->i + 2] == 'f') {
        check_float(format[y + 1], list, mem);
    }
    if (format[mem->i] == 'l') {
        check_long(format[y + 1], list, mem);
    } else {
        check_format(format, list, mem);
    }
    if (mem->exist == 0) {
        my_putchar('%');
        my_putchar(format[mem->i]);
    }
    return;
}

int my_printf(const char *format, ...)
{
    int tmp = 0;
    my_struct_t *mem = malloc(sizeof(mem));
    init_struct(mem);
    va_list list;
    va_start(list, format);
    for (int y = 0; format[y]; y++, mem->i++) {
        if (format[mem->i] == '%') {
            check_flag_type(format, list, mem, y + 1);
        } else {
            my_putchar(format[y]);
            mem->count++;
        }
        y = mem->i;
    }
    tmp = mem->count;
    free(mem);
    va_end(list);
    return tmp;
}
