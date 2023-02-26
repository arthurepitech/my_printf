/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** Day08
*/

#include <stddef.h>

void my_putstr(char *c);

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return 0;
}
