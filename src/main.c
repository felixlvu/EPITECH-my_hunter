/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

int main(int arc, char **arv)
{
    if (arc > 2)
        return 84;
    if (arc == 2 && my_strcmp(arv[1], "-h") == 0)
        flag_h();
    else if (arc == 2 && my_strcmp(arv[1], "-h") != 0)
        return 84;
    if (arc == 1)
        start_hunter();
    return 0;
}
