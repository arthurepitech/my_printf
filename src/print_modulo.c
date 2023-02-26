/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar
*/

#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

int print_modulo(va_list list, my_struct_t *mem)
{
    (void)(list);
    char c = '%';
    write(1, &c, 1);
    mem->count++;
    return 0;
}
