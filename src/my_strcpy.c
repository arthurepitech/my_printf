/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strcpy
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int count = my_strlen(src) + 1;
    for (int i = 0; i < count; i++)
        dest[i] = src[i];
    dest[count] = '\0';
    return dest;
}
