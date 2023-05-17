/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void draw_sprite_menu(Hunter *hunter)
{
    sfVector2f pos = {720, 640};
    sfVector2f size = {1.5, 1.5};
    sfVector2f pos_exit = {720, 840};
    sfVector2f size_exit = {1.5, 1.5};
    sfSprite_setPosition(hunter->sprite_play, pos);
    sfSprite_setScale(hunter->sprite_play, size);
    sfSprite_setPosition(hunter->sprite_exit, pos_exit);
    sfSprite_setScale(hunter->sprite_exit, size_exit);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_menu, NULL);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_play, NULL);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_exit, NULL);
}

void draw_sprite_game_over(Hunter *hunter)
{
    sfVector2f pos = {510, 640};
    sfVector2f size = {1.5, 1.5};
    sfVector2f pos_exit = {736.5, 840};
    sfVector2f size_exit = {1.5, 1.5};
    sfSprite_setPosition(hunter->sprite_restart, pos);
    sfSprite_setScale(hunter->sprite_restart, size);
    sfSprite_setPosition(hunter->sprite_exit, pos_exit);
    sfSprite_setScale(hunter->sprite_exit, size_exit);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_game_over, NULL);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_restart, NULL);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_exit, NULL);
}
