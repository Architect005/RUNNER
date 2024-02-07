/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    Runner runner;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (0);
    }
    start(&runner);
    game(&runner);
    runner.i = 0;
    while (sfRenderWindow_isOpen(runner.window)) {
            ant(&runner);
            impact(&runner);
            runner.i++;
        while (sfRenderWindow_pollEvent(runner.window, &runner.event)) {
            if (runner.event.type == sfEvtClosed)
                sfRenderWindow_close(runner.window);
        } after(&runner);
    } destroy(&runner);
    return (0);
}
