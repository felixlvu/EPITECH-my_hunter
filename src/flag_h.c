/*
** EPITECH PROJECT, 2022
** my_radar
** File description:
** my_radar
*/

#include "myh.h"

void flag_h(void)
{
    write(1, "Dock Hunt simulation panel\n", 27);
    write(1, "\nUSAGE\n", 8);
    write(1, " ./my_hunter \n", 15);
    write(1, "   path_to_script    The path to the script file.\n", 49);
    write(1, "\nOPTIONS\n", 9);
    write(1, " -h          print the usage and quit.\n", 39);
    write(1, "\nUSER INTERACTIONS\n", 19);
    write(1, " ‘L’    key enable/disable hitboxes and areas.\n", 46);
    write(1, " ‘S’ key enable/disable sprites.\n", 37);
}
