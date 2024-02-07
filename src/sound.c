/*
** EPITECH PROJECT, 2020
** sound
** File description:
** make song
*/

#include "../include/my.h"

void song(Runner *runner)
{
    sfBool loop;

    runner->music = sfMusic_createFromFile("ressource/jojo.ogg");
    sfMusic_play(runner->music);
    sfMusic_setLoop(runner->music, sfTrue);
    runner->music2 = sfMusic_createFromFile("ressource/jump.ogg");
}
