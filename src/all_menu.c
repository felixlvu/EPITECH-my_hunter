/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

int print_menu(Hunter *hunter)
{
    sfEvent event;
    int result = 0;
    draw_sprite_menu(hunter);
    sfRenderWindow_display(hunter->Window);

    while (1) {
        result = event_click_menu(hunter, event);
        if (result == 1)
            return (1);
        if (result == 2)
            return (2);
    }
    return 0;
}

int print_game_over(Hunter *hunter)
{
    sfEvent event;
    int result = 0;
    draw_sprite_game_over(hunter);
    sfRenderWindow_display(hunter->Window);

    while (1) {
        result = event_click_game_over(hunter, event);
        if (result == 1)
            return (1);
        if (result == 2)
            return (2);
    }
    return 0;
}
