/*
** EPITECH PROJECT, 2022
** print_float
** File description:
** print_float
*/

#include "../include/my.h"

int print_float_basic(va_list list, my_struct_t *mem)
{
    double nbr = va_arg(list, double);
    int p = 6;
    int tmp = nbr * (my_compute_power_rec(10, p + 1));
    int a = (int)nbr * (my_compute_power_rec(10, p));
    int deci = nbr * (my_compute_power_rec(10, p));
    tmp = tmp - (deci * 10);
    deci = deci - a;
    if (tmp >= 5)
        deci++;
    a = a / (my_compute_power_rec(10, p));
    my_put_nbr(a);
    my_putchar('.');
    my_put_nbr(deci);
    mem->count += my_intlen(a) + 1 + my_intlen(deci);
    return 1;
}

int print_float(va_list list, int p, my_struct_t *mem)
{
    double nbr = va_arg(list, double);
    int tmp = nbr * (my_compute_power_rec(10, p + 1));
    int a = (int)nbr * (my_compute_power_rec(10, p));
    int deci = nbr * (my_compute_power_rec(10, p));
    deci = deci - a;
    tmp = tmp - (deci * 10);
    if (tmp >= 5)
        deci++;
    a = a / (my_compute_power_rec(10, p));
    my_put_nbr(a);
    my_putchar('.');
    my_put_nbr(deci);
    mem->count += (my_intlen(a) + my_intlen(deci) + 1);
    return 1;
}

