/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void create_texture(Hunter *hunter)
{
    hunter->background = sfTexture_createFromFile
    ("src/pictures/background.png", NULL);
    hunter->duck = sfTexture_createFromFile("src/pictures/ducks.png", NULL);
    hunter->life = sfTexture_createFromFile("src/pictures/life.png", NULL);
    hunter->menu = sfTexture_createFromFile("src/pictures/menu.png", NULL);
    hunter->play = sfTexture_createFromFile("src/pictures/play.png", NULL);
    hunter->exit = sfTexture_createFromFile("src/pictures/exit.png", NULL);
    hunter->game_over = sfTexture_createFromFile
    ("src/pictures/game_over.png", NULL);
    hunter->restart = sfTexture_createFromFile
    ("src/pictures/play_again.png", NULL);
}

void create_sprite(Hunter *hunter)
{
    hunter->sprite = sfSprite_create();
    hunter->sprite_life = sfSprite_create();
    hunter->sprite_duck = sfSprite_create();
    hunter->sprite_menu = sfSprite_create();
    hunter->sprite_play = sfSprite_create();
    hunter->sprite_exit = sfSprite_create();
    hunter->sprite_game_over = sfSprite_create();
    hunter->sprite_restart = sfSprite_create();
}

void set_texture(Hunter *hunter)
{
    sfSprite_setTexture(hunter->sprite, hunter->background, sfFalse);
    sfSprite_setTexture(hunter->sprite_duck, hunter->duck, sfFalse);
    sfSprite_setTexture(hunter->sprite_life, hunter->life, sfFalse);
    sfSprite_setTexture(hunter->sprite_menu, hunter->menu, sfFalse);
    sfSprite_setTexture(hunter->sprite_play, hunter->play, sfFalse);
    sfSprite_setTexture(hunter->sprite_exit, hunter->exit, sfFalse);
    sfSprite_setTexture(hunter->sprite_game_over, hunter->game_over, sfFalse);
    sfSprite_setTexture(hunter->sprite_restart, hunter->restart, sfFalse);
}

void create_extra(Hunter *hunter)
{
    hunter->move_duck_c = sfClock_create();
    hunter->anim_duck_c = sfClock_create();
}
