/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

int play_hunter(Hunter *hunter)
{
    int index = 0;

    update_life(hunter);
    print_duck(hunter);
    anim_duck(hunter);
    kill_duck(hunter);
    print_counter(hunter);
    index = check_pos_duck(hunter);
    if (index == 2) {
        return 2;
    }
    return 0;
}

void create_hunter(Hunter *hunter, sfVideoMode video_mode)
{
    create_extra(hunter);
    create_texture(hunter);
    create_sprite(hunter);
    create_window(hunter, video_mode);
}

void destroy_fonctions(sfEvent event, Hunter *hunter)
{
    close_window(event, hunter->Window);
    destroy_hunter(hunter);
}
