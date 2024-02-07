/*
** EPITECH PROJECT, 2021
** usage
** File description:
** program's usage
*/

#include "../include/my.h"

void usage_err(void)
{
    my_putstr("./my_runner: bad arguments: 0 given but 1 is required\n");
    my_putstr("retry with -h\n");
}

void usage(void)
{
    my_putstr("Finite runner created with CSFML.\n");
    my_putstr("\nUSAGE\n");
    my_putstr(" ./my_runner map.txt\n");
    my_putstr("\n\n\nOPTIONS\n");
    my_putstr(" Press O           to start the game\n");
    my_putstr(" -h                print the usage and quit.\n");
    my_putstr("\nUSER INTERACTIONS\n");
    my_putstr(" SPACE_KEY        jump.\n");
}
