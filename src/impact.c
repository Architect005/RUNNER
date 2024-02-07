/*
** EPITECH PROJECT, 2021
** impact
** File description:
** impact
*/

#include "../include/my.h"

void impact(Runner *runner)
{
    if (runner->position3.x == runner->position6.x) {
        runner->position3.x = 100;
    }
    if (runner->position3.x == runner->position7.x) {
        runner->position3.x = 100;
    }
}
