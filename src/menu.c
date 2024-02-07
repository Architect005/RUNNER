/*
** EPITECH PROJECT, 2021
** menu
** File description:
** runner's menu
*/

#include "../include/my.h"

void menu(Runner *runner)
{
    sfRenderWindow_clear(runner->window1, sfBlack);
    runner->texture4 = sfTexture_createFromFile("ressource/menu.png", NULL);
    runner->texture5 = sfTexture_createFromFile("ressource/go1.png", NULL);
    runner->sprite4 = sfSprite_create();
    runner->sprite5 = sfSprite_create();
    sfSprite_setTexture(runner->sprite4, runner->texture4, sfTrue);
    sfSprite_setTexture(runner->sprite5, runner->texture5, sfTrue);
    runner->position5.x = 350;
    runner->position5.y = 200;
    sfSprite_setPosition(runner->sprite5, runner->position5);
}
