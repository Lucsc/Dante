/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-dante-thomas.willson
** File description:
** hand_error
*/

#include "main.h"

int error_handling(int ac, char const * const av[])
{
    if (ac < 3 || ac > 4) {
        syntax_error();
        return ERROR;
    }
    if ((atoi(av[1]) == 0 || atoi(av[2]) == 0) ||
        (atoi(av[1]) < 0 || atoi(av[2]) < 0)) {
        numbers_error();
        return ERROR;
    }
    if (ac == 4) {
        if (strcmp(av[3], "perfect") != 0)
            return ERROR;
    }
    return SUCCES;
}