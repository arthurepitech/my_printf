/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_intlen
*/

int my_intlen(int nb)
{
    int i = 0;
    if (nb == 0)
        return 1;
    if (nb < 0) {
        nb = -nb;
        i++;
    }
    for (; nb > 0; i++)
        nb = nb / 10;
    return i;
}

int my_intlen_long(long int nb)
{
    long int i = 0;
    if (nb == 0)
        return 1;
    if (nb < 0) {
        nb = -nb;
        i++;
    }
    for (; nb > 0; i++)
        nb = nb / 10;
    return i;
}

