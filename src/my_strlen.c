/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Day04
*/

int my_strlen(char const *str)
{
    int count = 0;
    for (; str[count] != '\0'; count++);

    return count;
}
