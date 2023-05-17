/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void destroy_hunter(Hunter *hunter)
{
    sfTexture_destroy(hunter->background);
    sfTexture_destroy(hunter->duck);
    sfTexture_destroy(hunter->life);
    sfTexture_destroy(hunter->menu);
    sfTexture_destroy(hunter->play);
    sfTexture_destroy(hunter->exit);
    sfTexture_destroy(hunter->game_over);
    sfTexture_destroy(hunter->restart);
    sfSprite_destroy(hunter->sprite);
    sfSprite_destroy(hunter->sprite_duck);
    sfSprite_destroy(hunter->sprite_life);
    sfSprite_destroy(hunter->sprite_menu);
    sfSprite_destroy(hunter->sprite_play);
    sfSprite_destroy(hunter->sprite_exit);
    sfSprite_destroy(hunter->sprite_game_over);
    sfSprite_destroy(hunter->sprite_restart);
    sfRenderWindow_destroy(hunter->Window);
    sfClock_destroy(hunter->move_duck_c);
    sfClock_destroy(hunter->anim_duck_c);
}
