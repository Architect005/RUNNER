/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** display a string array
*/

#include "../include/my.h"

void my_putstr(char const *str)
{
    int x;

    for (x = 0; str[x] != '\0'; x++) {
        my_putchar(str[x]);
    }
}
