/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** do_random
*/

#include "main.h"

bool do_random(int i)
{
    int random = 0;

    random = rand() % 100;
    if (random >= i)
        return false;
    return true;
}