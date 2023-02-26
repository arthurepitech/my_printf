/*
** EPITECH PROJECT, 2022
** Part II
** File description:
** my_int_to_array
*/

#include <stddef.h>
#include <stdlib.h>
#include "../include/my.h"

char *my_int_to_array(int nbr)
{
    int len = my_intlen(nbr);
    char *array = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (nbr < 0) {
        array[0] = '-';
        nbr = nbr * (-1);
    }
    for (; i < len; i++) {
        array[i] = (nbr % 10) + 48;
        nbr = nbr / 10;
    }
    array[i] = '\0';
    my_revstr(array);
    return array;
}
