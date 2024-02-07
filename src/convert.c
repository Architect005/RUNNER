/*
** EPITECH PROJECT, 2021
** convert
** File description:
** pass int to char
*/

#include "../include/my.h"

char *convert(int num)
{
    char *str;
    int x, y;
    int nb = num;

    for (x = 0; num > 0; x++)
        num = num / 10;
    str = malloc(sizeof(char) * (x + 1));
    for (y = 0; y < x; y++) {
        str[y] = (nb % 10) + 48;
        nb = nb / 10;
    }
    str[x] = '\0';
    return (str);
}
