/*
** EPITECH PROJECT, 2021
** text
** File description:
** set text
*/

#include "../include/my.h"

void text(Runner *runner)
{
    char const *score = "Score :";
    char *str = convert(runner->i);

    runner->font = sfFont_createFromFile("amatic/Amatic-Bold.ttf");
    runner->text = sfText_create();
    runner->text2 = sfText_create();
    sfText_setString(runner->text, score);
    sfText_setString(runner->text2, str);
    sfText_setFont(runner->text, runner->font);
    sfText_setFont(runner->text2, runner->font);
    sfText_setCharacterSize(runner->text, 45);
    sfText_setCharacterSize(runner->text2, 45);
    sfText_setPosition(runner->text2, (sfVector2f){80, 0});
    sfText_setFillColor(runner->text, sfWhite);
    sfText_setFillColor(runner->text2, sfWhite);
    free(str);
}
