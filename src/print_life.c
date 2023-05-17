/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void update_life(Hunter *hunter)
{
    sfVector2f pos = {0, 0};
    sfVector2f size = {1, 1};
    sfSprite_setPosition(hunter->sprite_life, pos);
    sfSprite_setScale(hunter->sprite_life, size);
    sfSprite_setTextureRect(hunter->sprite_life,
    (sfIntRect){0, hunter->count_life, 346, 95});
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_life, NULL);
}
