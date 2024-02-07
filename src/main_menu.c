/*
** EPITECH PROJECT, 2021
** my_menu
** File description:
** display_menu
*/

#include "../include/my.h"

void window_menu(Runner *runner)
{
    runner->video_mode.width = 815;
    runner->video_mode.height = 300;
    runner->video_mode.bitsPerPixel = 32;
    runner->window1 = sfRenderWindow_create(runner->video_mode, "OG's Runner",
sfResize | sfClose, NULL);
}
