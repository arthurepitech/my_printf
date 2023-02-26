/*
** EPITECH PROJECT, 2022
** my_put_nbr_base
** File description:
** my_put_nbr_base
*/

#include "../include/my.h"

int my_put_nbr_long_base(unsigned long int nb, char const *base)
{
    unsigned long int len = my_strlen(base);
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > (len - 1)) {
        my_put_nbr_long_base(nb / len, base);
        my_put_nbr_long_base(nb % len, base);
    }
    if (nb >= 0 && nb <= (len - 1))
        my_putchar(base[nb]);
    return nb;
}

int my_put_nbr_base(int nb, char const *base)
{
    int len = my_strlen(base);
    if (nb < -2147483648 + len || nb > 2147483647 - len)
        return 0;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > (len - 1)) {
        my_put_nbr_base(nb / len, base);
        my_put_nbr_base(nb % len, base);
    }
    if (nb >= 0 && nb <= (len - 1))
        my_putchar(base[nb]);
    return nb;
}
