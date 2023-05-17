/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

int event_click_menu_next(Hunter *hunter, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed
    && event.mouseButton.button == sfMouseLeft) {
        if (check_start_press(hunter) == 1)
            return (1);
        if (check_exit_press(hunter) == 1) {
            return (2);
        }
    }
    if (event.type == sfEvtClosed) {
        return 2;
    }
    return 0;
}

int event_click_menu(Hunter *hunter, sfEvent event)
{
    int index = 0;
    while (sfRenderWindow_pollEvent(hunter->Window, &event)) {
        index = event_click_menu_next(hunter, event);
        if (index == 1)
            return (1);
        if (index == 2)
            return (2);
    }
    return 0;
}

int event_click_game_over_next(Hunter *hunter, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed
    && event.mouseButton.button == sfMouseLeft) {
        if (check_restart_colider(hunter) == 1) {
            hunter->count_life = 0;
            hunter->count_lose_duck = 0;
            hunter->count_dead_duck = 0;
            my_strcpy(hunter->text, "Score 0");
            return (1);
        }
        if (check_exit_press(hunter) == 1) {
            return 2;
        }
        }
        if (event.type == sfEvtClosed) {
            return 2;
        }
    return 0;
}

int event_click_game_over(Hunter *hunter, sfEvent event)
{
    int index = 0;
    while (sfRenderWindow_pollEvent(hunter->Window, &event)) {
        index = event_click_game_over_next(hunter, event);
            if (index == 1)
                return 1;
            if (index == 2)
                return 2;
    }
    return 0;
}
