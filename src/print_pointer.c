/*
** EPITECH PROJECT, 2022
** Part II
** File description:
** print_pointer
*/

#include "../include/my.h"

int print_pointer(va_list list, my_struct_t *mem)
{
    int nb = va_arg(list, int);
    int len = 0;
    if (nb != 0) {
        my_putstr("0x");
        len = my_put_nbr_base(nb, "0123456789abcdef");
    } else {
        my_putstr("(nil)");
        len = 3;
    }
    mem->count += len;
    return 1;
}
