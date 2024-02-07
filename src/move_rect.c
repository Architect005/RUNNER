/*
** EPITECH PROJECT, 2020
** move_rect
** File description:
** move the sprite
*/

#include "../include/my.h"

void move_rect1(Runner *runner)
{
    if (sfTime_asSeconds(runner->time1) > 0.11f) {
        if (runner->rect1.left < 700)
            runner->rect1.left += 10;
        else
            runner->rect1.left = 0;
        sfClock_restart(runner->clock1);
        sfSprite_setTextureRect(runner->sprite1, runner->rect1);
    }
    runner->time1 = sfClock_getElapsedTime(runner->clock1);
}

void move_rect2(Runner *runner2)
{
    if (sfTime_asSeconds(runner2->time2) > 0.10f) {
        if (runner2->rect2.left < 800)
            runner2->rect2.left += 13;
        else
            runner2->rect2.left = 0;
        sfClock_restart(runner2->clock2);
        sfSprite_setTextureRect(runner2->sprite2, runner2->rect2);
    }
    runner2->time2 = sfClock_getElapsedTime(runner2->clock2);
}

void move_rect3(Runner *runner3)
{
    if (sfTime_asSeconds(runner3->time3) > 0.12f) {
        if (runner3->rect3.left < 200)
            runner3->rect3.left += 52.5;
        else
            runner3->rect3.left = 0;
        sfClock_restart(runner3->clock3);
        sfSprite_setTextureRect(runner3->sprite3, runner3->rect3);
    }
    runner3->time3 = sfClock_getElapsedTime(runner3->clock3);
}
