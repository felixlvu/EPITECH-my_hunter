/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

int check_start_press(Hunter *hunter)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(hunter->Window);
    sfVector2f play_pos = sfSprite_getPosition(hunter->sprite_play);

    if (mouse_pos.x < play_pos.x + 314 * 1.5 &&
    mouse_pos.y < play_pos.y + 140 * 1.5 &&
    mouse_pos.x > play_pos.x && mouse_pos.y > play_pos.y) {
        return 1;
    }
    return 0;
}

int check_restart_colider(Hunter *hunter)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(hunter->Window);
    sfVector2f restart_pos = sfSprite_getPosition(hunter->sprite_restart);

    if (mouse_pos.x < restart_pos.x + 600 * 1.5 &&
    mouse_pos.y < restart_pos.y + 153 * 1.5 &&
    mouse_pos.x > restart_pos.x && mouse_pos.y > restart_pos.y) {
        return 1;
    }
    return 0;
}

int check_exit_press(Hunter *hunter)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(hunter->Window);
    sfVector2f exit_pos = sfSprite_getPosition(hunter->sprite_exit);

    if (mouse_pos.x < exit_pos.x + 298 * 1.5 &&
    mouse_pos.y < exit_pos.y + 139 * 1.5 &&
    mouse_pos.x > exit_pos.x && mouse_pos.y > exit_pos.y) {
        return 1;
    }
    return 0;
}

void kill_duck(Hunter *hunter)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
            check_duck_shoot(hunter);
    }
}
