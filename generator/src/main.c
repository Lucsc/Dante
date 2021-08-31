/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-1-bsdante-thomas.willson
** File description:
** main
*/

#include "main.h"

static void load_game(int ac, char const * const av[])
{
    perfect_t game_1;
    imperfect_t game_2;

    if (ac == 3)
        init_imperfect_game(&game_2, av);
    if (ac == 4) {
        if (strcmp(av[3], "perfect") == 0)
            init_perfect_game(&game_1, av);
    }
}

int main(int ac, char const * const av[])
{
    if (error_handling(ac, av) == 84)
        return 84;
    srand(time(NULL));
    load_game(ac, av);
    return SUCCES;
}