/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy elements
*/

#include "../include/my.h"

void destroy(Runner *runner)
{
    sfRenderWindow_destroy(runner->window);
    sfSprite_destroy(runner->sprite1);
    sfSprite_destroy(runner->sprite2);
    sfSprite_destroy(runner->sprite3);
    sfSprite_destroy(runner->sprite6);
    sfTexture_destroy(runner->texture1);
    sfTexture_destroy(runner->texture2);
    sfTexture_destroy(runner->texture3);
    sfTexture_destroy(runner->texture6);
    sfText_destroy(runner->text);
    sfText_destroy(runner->text2);
    sfMusic_destroy(runner->music);
    sfMusic_destroy(runner->music2);
    sfClock_destroy(runner->clock1);
    sfClock_destroy(runner->clock2);
    sfClock_destroy(runner->clock3);
}
