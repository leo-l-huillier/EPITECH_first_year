/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** my_compute_factorial_rec.c
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return 1;
    (nb < 0 || nb > 12) ? nb = 0 : nb;
    if (nb > 1 && nb < 13)
        return (my_compute_factorial_rec(nb - 1) * nb);
    return nb;
}
