/*
** EPITECH PROJECT, 2021
** start
** File description:
** start_game
*/

#include "../include/my.h"

void start(Runner *runner)
{
    window_menu(runner);
    while (sfRenderWindow_isOpen(runner->window1)) {
        menu(runner);
        while (sfRenderWindow_pollEvent(runner->window1, &runner->event)) {
            if (sfKeyboard_isKeyPressed (sfKeyO))
                sfRenderWindow_close(runner->window1);
        }
        sfRenderWindow_drawSprite(runner->window1, runner->sprite4, NULL);
        sfRenderWindow_drawSprite(runner->window1, runner->sprite5, NULL);
        sfRenderWindow_display(runner->window1);
    }
    sfRenderWindow_destroy(runner->window1);
    sfSprite_destroy(runner->sprite4);
    sfSprite_destroy(runner->sprite5);
    sfTexture_destroy(runner->texture4);
    sfTexture_destroy(runner->texture5);
}
