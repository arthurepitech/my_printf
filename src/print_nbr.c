/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int print_char(va_list list, my_struct_t *mem)
{
    char c = va_arg(list, int);
    write(1, &c, 1);
    mem->count++;
    return 1;
}

int print_str(va_list list, my_struct_t *mem)
{
    char *str = va_arg(list, char *);
    int y = 0;
    for (; str[y] != '\0'; y++) {
        if (str[y] >= '0' && str[y] <= '9')
            my_put_nbr(str[y] - '0');
        else
            my_putchar(str[y]);
    }
    mem->count += y;
    return 0;
}

int print_str_maj(va_list list, my_struct_t *mem)
{
    char *c = va_arg(list, char *);
    int i = 0;
    for (; c[i] != '\0'; i++) {
        if (c[i] < 32) {
            my_putchar('\\');
            my_put_nbr(0);
            my_put_nbr_base(c[i], "01234567");
        } else {
            my_putchar(c[i]);
        }
    }
    mem->count += i;
    return 1;
}

int print_unsigned(va_list list, my_struct_t *mem)
{
    int nb = va_arg(list, unsigned int);
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return 0;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
    mem->count += my_intlen(nb);
    return 1;
}

int print_nbr(va_list list, my_struct_t *mem)
{
    int nb = 0;
    if (mem->save_nb != 0)
        nb = mem->save_nb;
    else
        nb = va_arg(list, int);
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
        mem->count++;
    }
    mem->count += my_intlen(nb);
    return 1;
}
