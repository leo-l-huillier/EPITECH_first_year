/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** my_str_islower.c
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 1;
    while (str[i]) {
        if (str[i] > 'z' || str[i] < 'a')
            return 0;
        i++;
    }
    return 1;
}
