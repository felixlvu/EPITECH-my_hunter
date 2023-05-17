/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void print_counter(Hunter *hunter)
{
    sfFont *font = sfFont_createFromFile("src/pictures/minecraft.ttf");
    sfText *text_sf = sfText_create();
    sfText_setFont(text_sf, font);
    sfText_setCharacterSize(text_sf, 50);
    sfText_setPosition(text_sf, (sfVector2f){1560, 10});
    sfText_setColor(text_sf, sfWhite);
    sfText_setString(text_sf, hunter->text);
    sfRenderWindow_drawText(hunter->Window, text_sf, NULL);
}
