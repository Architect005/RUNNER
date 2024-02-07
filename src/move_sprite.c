/*
** EPITECH PROJECT, 2020
** move_sprite
** File description:
** move the sprite on screen
*/

#include "../include/my.h"

void move_sprite(Runner *runner)
{
    if (runner->position3.x < 815) {
        runner->position3.y = 190;
        runner->position3.x += 0.07;
        if (sfKeyboard_isKeyPressed (sfKeySpace)) {
            runner->position3.y = 150;
        }
    } sfSprite_setPosition(runner->sprite3, runner->position3);
    if (runner->position6.x >= -1) {
        runner->position6.y = 220;
        runner->position6.x -= 0.3;
    }
    else
        runner->position6.x = 1000;
    sfSprite_setPosition(runner->sprite6, runner->position6);
    if (runner->position7.x >= 0) {
        runner->position7.y = 230;
        runner->position7.x -= 0.4;
    }
    else
        runner->position7.x = 3000;
    sfSprite_setPosition(runner->sprite7, runner->position7);
}
