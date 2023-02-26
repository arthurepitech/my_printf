/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Day03
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *c)
{
    int i = 0;
    for (; c[i] != '\0'; i++)
        my_putchar(c[i]);
    return i;
}
