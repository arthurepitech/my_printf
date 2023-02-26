/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int print_lunsigned(va_list list, my_struct_t *mem)
{
    unsigned long int nb = va_arg(list, unsigned long int);
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_long_nbr(nb / 10);
        my_put_long_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
    mem->count += my_intlen(nb);
    return 0;
}

int print_lnbr(va_list list, my_struct_t *mem)
{
    long int nb = va_arg(list, long int);
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_long_nbr(nb / 10);
        my_put_long_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
    mem->count += my_intlen_long(nb);
    return 0;
}
