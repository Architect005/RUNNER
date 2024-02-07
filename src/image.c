/*
** EPITECH PROJECT, 2020
** image
** File description:
** display image
*/

#include "../include/my.h"

void animation(Runner *runner)
{
    sfRenderWindow_clear(runner->window, sfBlack);
    runner->texture1 = sfTexture_createFromFile("ressource/bluemoon.png", NULL);
    runner->texture2 = sfTexture_createFromFile("ressource/back.png", NULL);
    runner->texture3 = sfTexture_createFromFile("ressource/runner.png", NULL);
    runner->texture6 = sfTexture_createFromFile("ressource/deep.png", NULL);
    runner->texture7 = sfTexture_createFromFile("ressource/deep.png", NULL);
    runner->sprite1 = sfSprite_create();
    runner->sprite2 = sfSprite_create();
    runner->sprite3 = sfSprite_create();
    runner->sprite6 = sfSprite_create();
    runner->sprite7 = sfSprite_create();
    sfSprite_setTexture(runner->sprite1, runner->texture1, sfTrue);
    sfSprite_setTexture(runner->sprite2, runner->texture2, sfTrue);
    sfSprite_setTexture(runner->sprite3, runner->texture3, sfTrue);
    sfSprite_setTexture(runner->sprite6, runner->texture6, sfTrue);
    sfSprite_setTexture(runner->sprite7, runner->texture7, sfTrue);
}

void draw(Runner *runner)
{
    sfSprite_setTextureRect(runner->sprite1, runner->rect1);
    sfSprite_setTextureRect(runner->sprite2, runner->rect2);
    sfSprite_setTextureRect(runner->sprite3, runner->rect3);
    sfRenderWindow_drawSprite(runner->window, runner->sprite1, NULL);
    sfRenderWindow_drawSprite(runner->window, runner->sprite2, NULL);
    sfRenderWindow_drawSprite(runner->window, runner->sprite3, NULL);
    sfRenderWindow_drawSprite(runner->window, runner->sprite6, NULL);
    sfRenderWindow_drawSprite(runner->window, runner->sprite7, NULL);
    sfRenderWindow_drawText(runner->window, runner->text, NULL);
    sfRenderWindow_drawText(runner->window, runner->text2, NULL);
}
