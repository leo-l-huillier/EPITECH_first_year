/*
** EPITECH PROJECT, 2021
** my_putsr
** File description:
** cpool day 4 task
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}