/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char tmp;
    int len = my_strlen(str) - 1;
    int i = 0;
    for (; i <= len; i++, len--) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return str;
}
