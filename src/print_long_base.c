/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_nbr_check_base
*/

#include <stddef.h>
#include <stdarg.h>
#include "../include/my.h"
#include <stdio.h>

int print_lbinaire(va_list list, my_struct_t *mem)
{
    unsigned long int nbr = va_arg(list, unsigned long int);
    char *base = "01";
    int len = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_long_base(nbr / len, base);
        my_put_nbr_long_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    mem->count += my_intlen_long(nbr);
    return 0;
}

int print_loctal(va_list list, my_struct_t *mem)
{
    unsigned long int nbr = va_arg(list, unsigned long int);
    char *base = "01234567";
    int len = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_long_base(nbr / len, base);
        my_put_nbr_long_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    mem->count += my_intlen_long(nbr);
    return 0;
}

int print_lhexa(va_list list, my_struct_t *mem)
{
    unsigned long int nbr = va_arg(list, unsigned long int);
    char *base = "0123456789abcdef";
    int len = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_long_base(nbr / len, base);
        my_put_nbr_long_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    mem->count += my_intlen_long(nbr);
    return 0;
}

int print_lhexa_maj(va_list list, my_struct_t *mem)
{
    unsigned long int nbr = va_arg(list, unsigned long int);
    char *base = "0123456789ABCDEF";
    int len = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_long_base(nbr / len, base);
        my_put_nbr_long_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    mem->count += my_intlen_long(nbr);
    return 0;
}
