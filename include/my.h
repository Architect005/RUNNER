/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

typedef struct Runner Runner;
struct Runner
{
    sfRenderWindow *window;
    sfRenderWindow *window1;
    sfVideoMode video_mode;
    sfTexture *texture1;
    sfTexture *texture2;
    sfTexture *texture3;
    sfTexture *texture4;
    sfTexture *texture5;
    sfTexture *texture6;
    sfTexture *texture7;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfSprite *sprite5;
    sfSprite *sprite6;
    sfSprite *sprite7;
    sfEvent event;
    sfMusic *music;
    sfMusic *music2;
    sfFont *font;
    sfFont *font2;
    sfKeyEvent key;
    sfIntRect rect1;
    sfIntRect rect2;
    sfIntRect rect3;
    sfClock *clock1;
    sfClock *clock2;
    sfClock *clock3;
    sfTime time1;
    sfTime time2;
    sfTime time3;
    sfText *text;
    sfText *text2;
    sfVector2f position1;
    sfVector2f position2;
    sfVector2f position3;
    sfVector2f position5;
    sfVector2f position6;
    sfVector2f position7;
    sfWindow *relativeTo;
    sfVector2i position;
    int i;
};

void animation(Runner *runner);
void display(Runner *runner);
void destroy(Runner *runner);
void window_menu(Runner *runner);
void window_create(Runner *runner);
void draw(Runner *runner);
void song(Runner *runner);
void sprite(Runner *runner);
void rect(Runner *runner);
void move_rect1(Runner *runner);
void move_rect2(Runner *runner2);
void move_rect3(Runner *runner3);
void move_sprite(Runner *runner);
void my_putchar(char c);
void my_putstr(char const *str);
void text(Runner *runner);
void time(void);
void ant(Runner *runner);
void usage(void);
void usage_err(void);
void game(Runner *runner);
void start(Runner *runner);
void menu(Runner *runner);
void after(Runner *runner);
void impact(Runner *runner);
char *convert(int num);
int error(int ac, char **av);
int main(int ac, char **av);

#endif
