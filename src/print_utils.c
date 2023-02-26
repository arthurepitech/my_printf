/*
** EPITECH PROJECT, 2022
** print_utils
** File description:
** print_utils
*/

#include <stdarg.h>
#include "../include/my.h"

int print_array(va_list list, my_struct_t *mem)
{
    char **array = va_arg(list, char **);
    my_show_word_array(array);
}

int print_hastag(va_list list, my_struct_t *mem, const char *format)
{
    mem->hastag = 1;
    mem->i++;
    check_basic(format[mem->i], list, mem);
    return 0;
}

int print_len_count(va_list list, my_struct_t *mem)
{
    return my_intlen(my_put_nbr(mem->count));
}

int print_utils(va_list list, my_struct_t *mem, const char *format)
{
    mem->i++;
    mem->save_nb = va_arg(list, int);
    if (mem->save_nb > 0) {
        my_putchar('+');
        mem->count += my_intlen(mem->save_nb) + 1;
        return 0;
    }
    mem->count += my_intlen(mem->save_nb);
    return 0;
}
