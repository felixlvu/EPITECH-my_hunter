/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void close_window(sfEvent event, sfRenderWindow *Window)
{
    while (sfRenderWindow_pollEvent(Window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(Window);
        }
    }
}

void init_hunter(Hunter *hunter)
{
    hunter->text = malloc(sizeof(char) * 8);
    my_strcpy(hunter->text, "Score 0");
    hunter->xduck = -350;
    hunter->yduck = rand() % 600;
    hunter->count_life = 0;
    hunter->count_score = 0;
    hunter->count_lose_duck = 0;
    hunter->count_dead_duck = 0;
    hunter->rec_duck = 110;
    hunter->result = 0;
}

void create_window(Hunter *hunter, sfVideoMode video_mode)
{
    for (int index = 0; index != 1 ; index++) {
        hunter->Window = sfRenderWindow_create(video_mode,
        "My_Hunter", sfClose, NULL);
        set_texture(hunter);
        sfRenderWindow_setFramerateLimit(hunter->Window, 60);
    }
}

int print_window(Hunter *hunter)
{
    while (sfRenderWindow_isOpen(hunter->Window)) {
        close_window(hunter->event, hunter->Window);
        if (hunter->result == 0)
            hunter->result = print_menu(hunter);
        if (hunter->result == 2) {
            destroy_fonctions(hunter->event, hunter);
            return 2;
        }
        sfRenderWindow_clear(hunter->Window, sfBlack);
        sfRenderWindow_drawSprite(hunter->Window, hunter->sprite, NULL);
        if (play_hunter(hunter) == 2) {
            destroy_fonctions(hunter->event, hunter);
            return 2;
        }
        sfRenderWindow_display(hunter->Window);
    }
    return 0;
}

int start_hunter(void)
{
    Hunter *hunter;
    hunter = malloc(sizeof(Hunter));
    init_hunter(hunter);
    sfVideoMode video_mode = {1920, 1080, 32};
    create_hunter(hunter, video_mode);

    if (print_window(hunter) == 2)
        return 0;
    destroy_hunter(hunter);
    return 0;
}
