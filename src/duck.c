/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void move_duck(Hunter *hunter, sfClock *anim_duck_c)
{
    if (sfClock_getElapsedTime(anim_duck_c).microseconds > 100) {
        hunter->xduck += 10;
        sfVector2f pos = sfSprite_getPosition(hunter->sprite_duck);
        if (pos.x > 2000)
            hunter->xduck = -350;
        sfSprite_setPosition(hunter->sprite_duck, pos);
        sfClock_restart(anim_duck_c);
    }
}

void print_duck(Hunter *hunter)
{
    sfVector2f pos = {hunter->xduck, hunter->yduck};
    sfVector2f size = {1, 1};
    move_duck(hunter, hunter->anim_duck_c);
    sfSprite_setPosition(hunter->sprite_duck, pos);
    sfSprite_setScale(hunter->sprite_duck, size);
    sfRenderWindow_drawSprite(hunter->Window, hunter->sprite_duck, NULL);
}

void check_duck_shoot(Hunter *hunter)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(hunter->Window);
    sfVector2f duck_pos = sfSprite_getPosition(hunter->sprite_duck);

    if (mouse_pos.x < duck_pos.x + 110 && mouse_pos.y < duck_pos.y + 100 &&
        mouse_pos.x > duck_pos.x && mouse_pos.y > duck_pos.y) {
        hunter->xduck = -350;
        hunter->yduck = rand() % 600;
        hunter->count_dead_duck++;
        hunter->count_score += 58.2;
        itoa(hunter->count_dead_duck, 10, hunter);
    }
}

int check_pos_duck(Hunter *hunter)
{
    int index = 0;
    if (hunter->xduck > 2000) {
        hunter->xduck = -350;
        hunter->yduck = rand() % 600;
        hunter->count_lose_duck += 1;
        hunter->count_life += 122;
        if (hunter->count_lose_duck == 3) {
            index = print_game_over(hunter);
        }
    }
    if (index == 2)
        return 2;
    return 0;
}

void anim_duck(Hunter *hunter)
{
    if (sfClock_getElapsedTime(hunter->move_duck_c).microseconds > 82000) {
        sfSprite_setTextureRect(hunter->sprite_duck,
        (sfIntRect){hunter->rec_duck, 0, 110, 110});
        sfClock_restart(hunter->move_duck_c);
    }
    hunter->rec_duck += 110;
    if (hunter->rec_duck == 330)
        hunter->rec_duck = 110;
}
