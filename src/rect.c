/*
** EPITECH PROJECT, 2020
** rect
** File description:
** cut the sprite sheet
*/

#include "../include/my.h"

void rect(Runner *runner)
{
    runner->rect1.top = 0;
    runner->rect1.left = 0;
    runner->rect1.width = 816;
    runner->rect1.height = 300;
    runner->clock1 = sfClock_create();
    runner->position1 = sfSprite_getPosition(runner->sprite1);
    runner->rect2.top = 0;
    runner->rect2.left = 0;
    runner->rect2.width = 816;
    runner->rect2.height = 300;
    runner->clock2 = sfClock_create();
    runner->position2 = sfSprite_getPosition(runner->sprite2);
    runner->rect3.top = 0;
    runner->rect3.left = 0;
    runner->rect3.width = 48;
    runner->rect3.height = 90;
    runner->clock3 = sfClock_create();
    runner->position3 = sfSprite_getPosition(runner->sprite3);
}
