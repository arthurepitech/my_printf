/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_put_nbr_check_base
*/

#include <stddef.h>
#include <stdarg.h>
#include "../include/my.h"

int print_spaces(va_list list, my_struct_t *mem, const char *format)
{
    (void)(format);
    int i = 1;
    int need = va_arg(list, unsigned int);
    for (; i < need; i++)
        my_putchar(' ');
    mem->count += i;
    return 1;
}

int print_binaire(va_list list, my_struct_t *mem)
{
    int nbr = va_arg(list, unsigned int);
    char *base = "01";
    int len = my_strlen(base);

    if (nbr < -2147483648 + len || nbr > 2147483647 - len)
        return 0;
    if (nbr < 0) {
        nbr = nbr * (-1);
    }
    if (nbr > len - 1) {
        my_put_nbr_base(nbr / len, base);
        my_put_nbr_base(nbr % len, base);
    }
    if (nbr >= 0 && nbr <= len - 1) {
        my_putchar(base[nbr]);
    }
    mem->count += my_intlen(nbr);
    return 1;
}

int print_octal(va_list list, my_struct_t *mem)
{
    int nbr = va_arg(list, int);
    char *base = "01234567";
    int len = my_strlen(base);
    if (mem->hastag == 1 && (my_int_to_array(nbr)[0]) != '0')
        my_putchar('0');
    if (nbr < -2147483648 + len || nbr > 2147483647 - len)
        return 0;
    if (nbr < 0)
        nbr = nbr * (-1);
    if (nbr > len - 1) {
        my_put_nbr_base(nbr / len, base);
        my_put_nbr_base(nbr % len, base);
    }
    mem->count += my_intlen(nbr);
    return 1;
}

int print_hexa(va_list list, my_struct_t *mem)
{
    int nbr = va_arg(list, int);
    char *base = "0123456789abcdef";
    int len = my_strlen(base);
    if (mem->hastag == 1 && (my_int_to_array(nbr)[0]) != '0'
        && (my_int_to_array(nbr)[1]) != 'x')
        my_putstr("0x");
    if (nbr < -2147483648 + len || nbr > 2147483647 - len)
        return 0;
    if (nbr < 0)
        nbr = nbr * (-1);
    if (nbr > len - 1) {
        my_put_nbr_base(nbr / len, base);
        my_put_nbr_base(nbr % len, base);
    }
    mem->count += my_intlen(nbr);
    return 1;
}

int print_hexa_maj(va_list list, my_struct_t *mem)
{
    int nbr = va_arg(list, int);
    char *base = "0123456789ABCDEF";
    int len = my_strlen(base);
    if (mem->hastag == 1 && (my_int_to_array(nbr)[0]) != '0'
        && (my_int_to_array(nbr)[1]) != 'X')
        my_putstr("0x");
    if (nbr < -2147483648 + len || nbr > 2147483647 - len)
        return 0;
    if (nbr < 0)
        nbr = nbr * (-1);
    if (nbr > len - 1) {
        my_put_nbr_base(nbr / len, base);
        my_put_nbr_base(nbr % len, base);
    }
    mem->count += my_intlen(nbr);
    return 1;
}
