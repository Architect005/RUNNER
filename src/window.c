/*
** EPITECH PROJECT, 2020
** window
** File description:
** display a window
*/

#include "../include/my.h"

void window_create(Runner *runner)
{
    runner->video_mode.width = 815;
    runner->video_mode.height = 300;
    runner->video_mode.bitsPerPixel = 32;
    runner->window = sfRenderWindow_create(runner->video_mode, "OG's Runner",
sfResize | sfClose, NULL);
}
