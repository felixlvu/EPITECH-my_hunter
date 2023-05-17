/*
** EPITECH PROJECT, 2022
** my.r
** File description:
** my.r
*/

#ifndef MYH_H
    #define MYH_H

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

typedef struct {
    int xduck;
    int yduck;
    int count_lose_duck;
    int count_life;
    int count_score;
    int count_dead_duck;
    int rec_duck;
    int result;

    char *text;

    sfTexture *background;
    sfTexture *duck;
    sfTexture *life;
    sfTexture *menu;
    sfTexture *play;
    sfTexture *exit;
    sfTexture *game_over;
    sfTexture *restart;

    sfSprite *sprite;
    sfSprite *sprite_duck;
    sfSprite *sprite_life;
    sfSprite *sprite_menu;
    sfSprite *sprite_play;
    sfSprite *sprite_exit;
    sfSprite *sprite_game_over;
    sfSprite *sprite_restart;

    sfRenderWindow *Window;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f move;
    sfEvent event;
    sfClock *move_duck_c;
    sfClock *anim_duck_c;
}Hunter;

    int main(int arc, char **arv);
    void flag_h(void);
    int start_hunter(void);
    void create_texture(Hunter *hunter);
    void set_texture(Hunter *hunter);
    int my_strcmp(char const *s1, char const *s2);
    void create_sprite(Hunter *hunter);
    void move_duck(Hunter *hunter, sfClock *anim_duck_c);
    void check_duck_shoot(Hunter *hunter);
    int check_start_press(Hunter *hunter);
    int check_restart_colider(Hunter *hunter);
    int check_exit_press(Hunter *hunter);
    void print_duck(Hunter *hunter);
    int  print_game_over(Hunter *hunter);
    int print_menu(Hunter *hunter);
    void update_life(Hunter *hunter);
    void draw_sprite_game_over(Hunter *hunter);
    void draw_sprite_menu(Hunter *hunter);
    void anim_duck(Hunter *hunter);
    int check_pos_duck(Hunter *hunter);
    void create_extra(Hunter *hunter);
    void create_hunter(Hunter *hunter, sfVideoMode video_mode);
    int play_hunter(Hunter *hunter);
    void kill_duck(Hunter *hunter);
    void create_window(Hunter *hunter, sfVideoMode video_mode);
    int event_click_game_over(Hunter *hunter, sfEvent event);
    int event_click_menu(Hunter *hunter, sfEvent event);
    void print_counter(Hunter *hunter);
    char *my_strcpy(char *dest, char const *src);
    char* itoa(int num, int base, Hunter *hunter);
    void print_counter(Hunter *hunter);
    void destroy_hunter(Hunter *hunter);
    void close_window(sfEvent event, sfRenderWindow *Window);
    void destroy_fonctions(sfEvent event, Hunter *hunter);
    void kill_duck(Hunter *hunter);
#endif
