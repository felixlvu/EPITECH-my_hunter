/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
