/*
** EPITECH PROJECT, 2021
** mystrlen
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}