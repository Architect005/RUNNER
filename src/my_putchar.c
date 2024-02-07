/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** display a character
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
