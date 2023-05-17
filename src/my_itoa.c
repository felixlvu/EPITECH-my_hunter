/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "myh.h"

void reverse(Hunter *hunter)
{
    char temp;

    temp = hunter->text[6];
    hunter->text[6] = hunter->text[7];
    hunter->text[7] = temp;
}

char* itoa(int num, int base, Hunter *hunter)
{
    int i = 6;
    int rem = 0;

    if (num == 0) {
        hunter->text[i] = '0';
        hunter->text[i++] = '\0';
        return 0;
    }
    while (num != 0) {
        rem = num % base;
        hunter->text[i++] =
    (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }
    hunter->text[i] = '\0';
    if (hunter->count_dead_duck > 9)
        reverse(hunter);
    return 0;
}
